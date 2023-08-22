#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int cab1,cab2;
	    scanf("%d %d",&cab1,&cab2);
	    if(cab1==cab2)
	    {
	        printf("ANY\n");
	    }
	    else if(cab1>cab2)
	    {
	        printf("SECOND\n");
	    }
	    else if(cab1<cab2)
	    {
	        printf("FIRST\n");
	    }
	}
	return 0;
}

