#include<stdio.h>
#include<stdlib.h>


int main()
{
    int T;
    scanf("%d",&T);

    while(T--)
    {
        int N;
        scanf("%d",&N);

        int a[N];

        int i,j,k;

        for(i=0;i<N;i++)
        {
            scanf("%d",a+i);
        }

        int b[N-1];

        for(i=0;i<N-1;i++)
        {
            if(a[i+1]>a[i])b[i]=1;
            else if(a[i+1]<a[i])b[i]=-1;
            else b[i]=0;
        }

        int beven[N-1];
        int bodd[N-1];

        for(i=0;i<N-1;i++)
        {
            if(i%2==0)
            {
               if(b[i]==0)
               {
                   beven[i]=1;
                   bodd[i]=-1;
               }

               else beven[i]=bodd[i]=b[i];
            }

            else
            {
                if(b[i]==0)
                {
                    bodd[i]=1;
                    beven[i]=-1;
                }
                else beven[i]=bodd[i]=b[i];
            }
            
        }

        int maxodd[N-1],maxeven[N-1];

        for(i=0;i<N-1;i++)
        {
            maxodd[i]=maxeven[i]=-1;
        }

        int p=0;

        while(p<N-1)
        {
            if(p%2==1)p++;

            else
            {
                int psp=p;
                int count=0;
                while(p<N-1)
                {
                    if((p%2==1&&beven[p]==-1)||(p%2==0 && beven[p]==1))
                    {
                        count++;
                        p++;
                    }
                    else 
                    {if(count==0)maxeven[psp]=0;p++;break;}
                }

                maxeven[psp]=count;
            }


        }

        p=0;

        while(p<N-1)
        {
            if(p%2==0)p++;

            else
            {
                int psp=p;
                int count=0;
                while(p<N-1)
                {
                    if((p%2==0&&bodd[p]==-1)||(p%2==1 && beven[p]==1))
                    {
                        count++;
                        p++;
                    }
                    else {if(count==0)maxodd[psp]=0; p++;break;}
                }

                maxodd[psp]=count;
            }


        }

        int max[N-1];
        for(i=0;i<N-1;i++)
        {
            max[i]=maxodd[i]>maxeven[i]?maxodd[i]:maxeven[i];
        }

        int score[N-1];

        for(i=0;i<N-1;i++)
        {
            score[i]=0;
            if(max[i]==-1)continue;

            if(max[i]%2==1)
            {
                if(i+max[i]>=N-1)
                {
                    score[i]=max[i]+1;
                }

                else
                {
                    score[i]=max[i]+1+max[max[i]+i];
                }
                
            }

            else
            {
                if(i+max[i]>=N-1)
                {
                    score[i]=max[i]+1;
                }

                else if(i+max[i]==N-2)
                {
                    score[i]=max[i]+2;
                }

                else score[i]=2+max[i]+max[i+max[i]+1];
            }


            

            

        }

        int ans=0;
            
            for(i=0;i<N-1;i++)
            {
                if(score[i]>ans)ans=score[i];
            }

            ans++;

            printf("%d\n",ans);





  



    }

    return 0;
}