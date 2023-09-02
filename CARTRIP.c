#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int km;
	    scanf("%d",&km);
	    if(km<=300)
	    {
	        printf("3000\n");
	    }
	    else
	    {
	        printf("%d\n",km*10);
	    }
	}
	return 0;
}

