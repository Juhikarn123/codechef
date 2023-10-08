#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int diff=a-b;
	    int profit=a+(a*10/100);
	    int new_profit=profit-diff;
	    printf("%d\n",new_profit);
	}
	return 0;
}

