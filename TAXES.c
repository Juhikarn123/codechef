#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int income;
	    scanf("%d",&income);
	    if(income>100)
	    {
	        printf("%d\n",income-10);
	    }
	    else
	    {
	        printf("%d\n",income);
	    }
	}
	return 0;
}

