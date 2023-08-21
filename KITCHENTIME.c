#include <stdio.h>

int main(void) 
{
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int start,end,hour;
	    scanf("%d %d",&start,&end);
	    hour=end-start;
	    printf("%d\n",hour);
	}
	return 0;
}

