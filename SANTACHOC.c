#include <stdio.h>
#include<stdlib.h>
int main()
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int number,k,i,j;
        long long sum=0;
        scanf("%d %d",&number,&k);
        int choc[number];
        
        for(i=0;i<number;i++)
        {
            scanf("%d",&choc[i]);
            sum+=choc[i];
        }
        if(sum<number)
        {
            printf("NO\n");
        }
        else
        {
            sum=sum%number;
            if(k==0 && sum!=0)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
            
        }
    }
}