#include <stdio.h>

int main(void) {
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int waterdrunk,water;
	    scanf("%d",&waterdrunk);
	    water=waterdrunk-2000;
	    if(water>=0)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}

