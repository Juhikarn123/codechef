#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a>b)
	    {
	        printf("LOSS\n");
	    }
	    else if(a<b)
	    {
	        printf("PROFIT\n");
	    }
	    else
	    {
	        printf("NEUTRAL\n");
	    }
	}
	return 0;
}

