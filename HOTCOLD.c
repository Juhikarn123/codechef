#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int temp;
	    scanf("%d",&temp);
	    if(temp>20)
	    {
	        printf("HOT\n");
	    }
	    else
	    {
	        printf("COLD\n");
	    }
	}
	return 0;
}

