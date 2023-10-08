#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int n;
	    scanf("%d",&n);
	    if(n<4)
	    {
	        printf("MILD\n");
	    }
	    else if(n>=4 && n<7)
	    {
	        printf("MEDIUM\n");
	    }
	    else
	    {
	        printf("HOT\n");
	    }
	}
	return 0;
}

