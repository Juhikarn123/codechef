#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int n;
	    scanf("%d",&n);
	    if(n<7)
	    {
	        printf("YES\n");
	    }
	    else if(n>=7)
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}

