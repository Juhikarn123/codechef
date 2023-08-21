#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int rupees1,rupees2;
	    scanf("%d %d",&rupees1,&rupees2);
	    int total=10*rupees1+90*rupees2;
	    printf("%d\n",total);
	}
	
	return 0;
}

