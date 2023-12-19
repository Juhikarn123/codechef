#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],max=0,br[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]+i+1>max)
        max=ar[i]+i+1;
        br[i]=max;
    }
    printf("%d ",max);
    int max1=0,max2;
    for(int i=n-2;i>=0;i--)
    {
        max2=br[i]+(n-1-i);
        if(i==n-2)
        {
            max1=ar[n-1]+1;
        }
        else
        {
            if(ar[i+1]+1>max1++)
            {
                max1=ar[i+1]+1;
            }
        }
        if(max2>max1)
        {
            max=max2;
        }
        else
        {
            max=max1;
        }
        printf("%d ",max);
    }
}