#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int need,available;
	    scanf("%d %d",&need,&available);
	    if(need<=available)
	    {
	        printf("0\n");
	    }
	    else
	    {
	        printf("%d\n",need-available);
	    }
	}
	return 0;
}

