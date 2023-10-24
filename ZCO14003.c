#include<stdio.h>
int func(const void * a,const void * b)
{
    return(*(int*)a-*(int*)b);
}
int main()
{
    long long int j,s=1;
    scanf("%lld",&j);
    long long int arr[j];
    for(int i=0;i<j;i++)
    {
        scanf("%lld",&arr[i]);
    }
    qsort(arr,j,sizeof(long long int),func);
    for(int i=0;i<j;i++)
    {
        if(s<((j-i)*arr[i]))
        {
            s=(j-i)*arr[i];
        }
    }
    printf("%lld\n",s);
}