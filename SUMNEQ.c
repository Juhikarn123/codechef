#include <stdio.h>

int main(void) 
{
	int sum,i,j,cnt=0;
	scanf("%d",&sum);
	for(i=1;i<sum;i++)
	{
	    for(j=1;j<sum;j++)
	    {
	        if(i+j==sum)
	        {
	            cnt++;
	        }
	    }
	}
	printf("%d",cnt);
	return 0;
}

