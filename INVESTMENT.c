#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int interest_rate,current_inflation;
	    scanf("%d %d",&interest_rate,&current_inflation);
	    int investment=2*current_inflation;
	    if(investment>interest_rate)
	    {
	        printf("NO\n");
	    }
	    else
	    {
	        printf("YES\n");
	    }
	}
	return 0;
}

