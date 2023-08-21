#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int total,perday,day;
	    scanf("%d %d %d",&total,&perday,&day);
	    int rem=day*perday;
	    if(rem>=total)
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

