#include <stdio.h>


void MergeSelf(int array[],int l ,int m ,int r);
void MergeSort(int array[],int l, int r);

int main()
{
	int N;
	scanf("%d",&N);
	
	int a[N];
	int i,j,k;
	
	for(i=0;i<N;i++)
	{
	    scanf("%d",a+i);
	}

    MergeSort(a,0,N-1);

    if(N==1 || N==2) printf("%d\n",N);

    else
    {
        int dp[N][N];

        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                dp[i][j]=2;
            }
        }

        for(j=N-2;j>0;j--)
        {
            k=j+1;
            i=j-1;

            while(i>=0 && k<=N-1)
            {
                if(a[i]+a[k]==2*a[j])
                {
                    dp[i][j]=dp[j][k]+1;
                    i--;
                    k++;
                }

                else if(a[i]+a[k]>2*a[j])
                {
                    i--;
                }

                else k++;

            }
        }

        int max=2;

        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(dp[i][j]>max)max=dp[i][j];
            }
        }


        printf("%d\n",max);
            
        
    }
    
}





































































void MergeSelf(int array[],int l ,int m ,int r)
{


    int temparray[r-l+1];
    int i;

    int p1=l; int p2=m+1; int p=0;

    while(p1<=m && p2<=r)
    {
       if(array[p1]<array[p2])
       {
         temparray[p]=array[p1];
         p1++; p++;
       }

       else {temparray[p]=array[p2]; p2++; p++;}
    }

    while(p1<=m)
    {
       temparray[p]=array[p1];
       p1++;p++;
    }

    while(p2<=r)
    {
        temparray[p]=array[p2];
        p2++; p++;
    }

    for(i=l;i<=r;i++)
    {
       array[i]=temparray[i-l];
    }
}

void MergeSort(int array[],int l, int r)
{
      if(l<r)
      {
           int m=(l+r)/2;
           MergeSort(array,l,m);
           MergeSort(array,m+1,r);
           MergeSelf(array,l,m,r);

      }

}