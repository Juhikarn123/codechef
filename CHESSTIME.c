#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int hour;
	    scanf("%d",&hour);
	    int min=hour*60;
	    int game=min/20;
	    printf("%d\n",game);
	}
	return 0;
}

