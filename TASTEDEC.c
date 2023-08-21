#include <stdio.h>

int main(void)
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int chocolate,candy;
	    scanf("%d %d",&chocolate,&candy);
	    if(2*chocolate>5*candy)
	    {
	        printf("Chocolate\n");
	    }
	    else if(2*chocolate==5*candy)
	    {
	        printf("Either\n");
	    }
	    else if(2*chocolate<5*candy)
	    {
	        printf("Candy\n");
	    }
	}
	return 0;
}

