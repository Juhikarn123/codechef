// moving intervals

#include<stdio.h>
#include<stdlib.h>

struct CAKE   
{
    long long int left;
    long long int right;
};
void merge(struct CAKE array[],int l ,int m ,int r)
{
    struct CAKE *temparray=(struct CAKE*)malloc(sizeof(struct CAKE)*(r-l+1));
    int i;

    int p1=l; int p2=m+1; int p=0;

    while(p1<=m && p2<=r)
    {
       if(array[p1].left<array[p2].left)
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

void MergeSort(struct CAKE array[],int l, int r)
{
      if(l<r)
      {
           int m=(l+r)/2;
           MergeSort(array,l,m);
           MergeSort(array,m+1,r);
           merge(array,l,m,r);

      }

}
long long int isSAFE(struct CAKE cake[],int l,int r)
{
    int i,j,k;

    long long max=-3;
    long long calc;

    for(i=l;i<r;i++)
    {
         calc=cake[i+1].left-cake[i].right;

        if(calc<=0)return 0;
        else
        {
            if(calc>max)max=calc;
        }
        
    }

    return max;
}



int main()
{
    int T;
    scanf("%d",&T);

    while(T--)
    {
        long long int C;
        int N,K;
        scanf("%lld %d %d",&C,&N,&K);

        struct CAKE *cake=(struct CAKE*)malloc(sizeof(struct CAKE)*(N+2));

        int i,j,k;

        for(i=0;i<N;i++)
        {
            scanf("%lld %lld",&cake[i].left,&cake[i].right);
        }

        cake[N].left=0;
        cake[N].right=0;
        cake[N+1].left=C+1;
        cake[N+1].right=C+1;

        MergeSort(cake,0,N+1); // sorting

        // checking
        if(K==0)
        {
            if(isSAFE(cake,0,N+1))
            {
                printf("Good\n");
            }

            else printf("Bad\n");
        }

        else if(K==1)
        {
            int ans=1;

            
            for(i=0;i<N+1;i++)
            {
                if(cake[i].right>=cake[i+1].left)
                {
                    break;
                }

                
            }
            struct CAKE *cake1=(struct CAKE*)malloc(sizeof(struct CAKE)*(N+1));
            struct CAKE *cake2=(struct CAKE*)malloc(sizeof(struct CAKE)*(N+1));
            if(i<N+2)
                {
                    

                    for(j=0;j<i;j++)
                    {
                        cake1[j]=cake[j];
                        cake2[j]=cake[j];

                    }
                    cake2[i]=cake[i];

                    for(j=i+1;j<N+2;j++)
                    {
                        cake1[j-1]=cake[j];
                    }

                    for(j=i+2;j<N+2;j++)
                    {
                        cake2[j-1]=cake[j];
                    }

                    if((isSAFE(cake1,0,N)>cake[i].right-cake[i].left+1)||(isSAFE(cake2,0,N)>cake[i+1].right-cake[i+1].left+1))ans=1;
                    else ans=0;
                }
                if(ans)printf("Good\n");
                else printf("Bad\n");
        }
        
    }
}