#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int chef,runner;
	    scanf("%d %d",&chef,&runner);
	    int gap=chef+runner;
	    printf("%d\n",gap);
	}
	return 0;
}

