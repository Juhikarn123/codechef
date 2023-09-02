#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int n;
	    scanf("%d",&n);
	    if(n%10==0)
	    {
	        printf("0\n");
	    }
	    else
	    {
	     printf("%d\n",n%10);
	    }
	}
	return 0;
}

