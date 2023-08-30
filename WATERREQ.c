#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int hour;
	    scanf("%d",&hour);
	    int water=hour*2;
	    printf("%d\n",water);
	}
	return 0;
}

