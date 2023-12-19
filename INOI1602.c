#include<stdio.h>
int a[700][700];
int b[700],v[700]; 
int Max_store[700][700];
int Answer_func(int s,int n)
    {
    if(n<=s||n==0)
        {
        return 0;
        }
    int Max=0,i=0,Max_dash=0,k=0,max1=0,max2=0;
    Max=Answer_func(s,n-1);
    while(k==0 && 1)
        {
        if(a[n][i]<=-1)
            {
            break;
            k==1;
            }
        if(a[n][i]>=s)
            {
            if(Max_store[s][a[n][i]-1]==-1)
                {
                max1= Answer_func(s,a[n][i]-1); 
                }
            else
                {
                max1=Max_store[s][a[n][i]-1];
                }
            if(Max_store[a[n][i]+1][n-1]==-1)
                {
                max2=Answer_func(a[n][i]+1,n-1);
                }
            else
                {
                max2=Max_store[a[n][i]+1][n-1];
                }
            Max_dash=max1+v[n]+v[a[n][i]]+max2;
            if(Max_dash>Max)
                {
                Max=Max_dash;
                }
            }
        i++;
        }
    Max_store[s][n]=Max;
    return Max;
    }

int main()
    {
    int i,j,n,k,l;
    for(i=0;i<700;i++)
        {
        for(j=0;j<700;j++)
            {
            Max_store[i][j]=-1;
            }
        }
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
        {
        scanf("%d",&v[i]);
        }
    for(i=0;i<n;i++)
        {
        scanf("%d",&b[i]);
        }
    for(i=0;i<n;i++)
        {
        l=0;
        for(j=0;j<i;j++)
            {
            if(b[i]<=k)
                {
                break;
                }
            if(b[i]-b[j]==k)
                {
                a[i][l]=j;
                l++;
                }
            }
        a[i][l]=-1;
        }
    printf("%d\n",Answer_func(0,n-1));
    return 0;
    }
  