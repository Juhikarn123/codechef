#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int target_run,current_run,required_run;
	    scanf("%d %d",&target_run,&current_run);
	    required_run=target_run-current_run;
	    printf("%d\n",required_run);
	}
	return 0;
}

