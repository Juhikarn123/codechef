#include<stdio.h>
#include<stdlib.h>


int main()
{
    
    int T;
    scanf("%d",&T);

    while(T--)
    {
        long long p,idx;

        scanf("%lld%lld",&p,&idx);

        //  int rep[p];

        //  int i,j,k;

        //  int spare=p;

        //  for(i=0;i<p;i++)
        //  {
        //      rep[i]=spare%2;
        //      spare=spare/2;
        //  }

        long long int ans=0;

        //  for(i=0;i<p;i++)
        //  {
        //      ans=(ans*2)+rep[p-1-i];
        //  }

        int i = 0;
        for ( i = 0; i < p; i++ )
        {
            ans *= 2;
            ans += idx % 2;
            idx /= 2;
        }

        printf("%lld\n",ans);


    }



  



    

    return 0;
}