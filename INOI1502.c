#include<stdio.h>
#include<malloc.h>
#include<math.h>
int M;
typedef struct a1
{
    int prime;
    struct a1 *next;
}node;
int prime_factor(int n, int start, node *p, int count)
{
    int s = sqrt(n), i;
    for(i = start; i <= s; i++)
    {
        if(n % i == 0)
        {
            p->prime = i;
            count++;
            while(n % i == 0)
                n /= i;
            if(n != 1)
            {
                p = p->next = (node *)malloc(sizeof(node));
                return prime_factor(n, i + 1, p, count);
            }
            p->next = NULL;
            return count;
        }
    }
    p->prime = n;
    p->next = NULL;
    count++;
    return count;
}
long long int Strings_For_Number(int n)
{
    if(n == 1)
        return 2 % M;
    int k = n / 2;
    long long int p = Strings_For_Number(k), a;
    if(n % 2 == 0)
        a = (p * p) % M;
    else
        a = (p * p * 2) % M;
    return a;
}
void collect_numbers(node *p, int *a, int n)
{
    int i = 0;
    node *q;
    while(p != NULL)
    {
        q = p;
        a[i++] = n / q->prime;
        p = p->next;
        free(q);
    }
}
int gcd(int a, int b)
{
    if(a == 0)
        return b;
    return gcd(b % a, a);
}
long long int Periodic_Strings(int *a, int n, int i, int current_gcd, long long int count, int flag)
{
    int new_gcd;
    long long int temp;
    while(i < n)
    {
        if(current_gcd == 0)
            new_gcd = a[i];
        else
            new_gcd = gcd(current_gcd, a[i]);
        temp = Strings_For_Number(new_gcd);
        if(flag)
            count = (count + temp) % M;
        else
            count = (count + M - temp) % M;
        i++;
        if(i < n)
            count = Periodic_Strings(a, n, i, new_gcd, count, !flag);
    }
    return count;
}
int main()
{
    int n, prime_divisor, *a;
    long long int result, count;
    scanf("%d%d", &n, &M);
    if(n == 1)
    {
        printf("2\n");
        return 0;
    }
    node *p = (node *)malloc(sizeof(node));
    prime_divisor = prime_factor(n, 2, p, 0);
    a = (int *)malloc(prime_divisor * sizeof(int));
    collect_numbers(p, a, n);
/*    int i;
    for(i=0;i<prime_divisor;i++)
        printf("%d ",a[i]);*/
    result = Strings_For_Number(n);
    count = Periodic_Strings(a, prime_divisor, 0, 0, 0, 1);
    result = ((result + M) - count) % M;
    printf("%lld\n", result);
    free(a);
//    print_factor(p);
    return 0;
} 