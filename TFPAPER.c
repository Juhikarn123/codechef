#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int alice,bob;
	    scanf("%d %d",&alice,&bob);
	    int score=alice-bob;
	    printf("%d\n",score);
	}
	return 0;
}

