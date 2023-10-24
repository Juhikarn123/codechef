#include <stdio.h>

int my_gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return my_gcd(b, a % b);
}

int main() 
{
    int numTestCases;
    scanf("%d", &numTestCases);

    while (numTestCases--)
    {
        int val1, val2, kValue;
        scanf("%d %d %d", &val1, &val2, &kValue);

        if (val1 > val2) 
        {
            int temp = val1;
            val1 = val2;
            val2 = temp;
        }

        if (kValue == 1) 
        {
            printf("%d\n", val1 + my_gcd(val1, val2));
        } 
        else 
        {
            printf("%d\n", 2 * my_gcd(val1, val2));
        }
    }

    return 0;
}