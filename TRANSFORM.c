#include <stdio.h>

int main(void) 
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int size;
	    scanf("%d",&size);
	    if(size%3==0)
	    {
	        printf("NORMAL\n");
	        
	    }
	    else if(size%3==1)
	    {
	        printf("HUGE\n");
	    }
	    else
	    {
	        printf("SMALL\n");
	    }
	}
	
	return 0;
}

