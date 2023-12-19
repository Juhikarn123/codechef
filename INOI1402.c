#include<stdio.h>
int main()
{
       int l,u,e,t,b,p;
       scanf("%d%d",&u,&e);
       int a[u][u];
       for(int i=0;i<u;i++)
       {
              for(int j=0;j<u;j++)
              {
                     if(i==j)
                     a[i][j]= 0;
                     else
                     a[i][j] = -1;
              }
       }
       for(int i=0;i<e;i++)
       {
              scanf("%d%d%d",&t,&b,&p);
              a[t-1][b-1] = p;
              a[b-1][t-1] = p;
       }
      
       for(l=0;l<u;l++)
       {
              for(int i=0;i<u;i++)
              {
                     for(int j=0;j<u;j++)
                     {
                           if(i!=j && (a[i][j]>a[i][l] + a[l][j] || a[i][j]==-1) && a[i][l]>-1 && a[l][j]>-1)
                           {
                                  a[i][j] = a[i][l] + a[l][j];
                           }
                     }
              }
       }
       long long int max = 0;
       for(int i=0;i<u;i++)
       {
              for(int j=i+1;j<u;j++)
              {
                     if(a[i][j] > max)
                     {
                           max = a[i][j];
                     }
              }
       }
       printf("%lld\n",max);
       return 0;
}



