#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int donations;
	    scanf("%d",&donations);
	    if(donations<=3)
	    {
	        printf("BRONZE\n");
	    }
	    else if(donations>3 && donations<=6)
	    {
	        printf("SILVER\n");
	    }
	    else if(donations>6)
	    {
	        printf("GOLD\n");
	    }
	}
	return 0;
}

