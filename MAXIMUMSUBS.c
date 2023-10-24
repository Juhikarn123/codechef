#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int time;
	    scanf("%d",&time);
	    int sec=time*60;
	    int sub=sec/30;
	    printf("%d\n",sub);
	}
	return 0;
}

