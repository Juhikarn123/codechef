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
	        printf("A\n");
	    }
	    else
	    {
	        printf("B\n");
	    }
	}
	return 0;
}

