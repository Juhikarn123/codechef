#include <stdio.h>

int main(void) 
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int c1,c2;
	    scanf("%d %d",&c1,&c2);
	    int sum=c1+c2;
	    if(sum%2==0)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}

