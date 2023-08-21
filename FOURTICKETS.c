#include <stdio.h>

int main(void) {
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int ticket_cost;
	    scanf("%d",&ticket_cost);
	    if(4*ticket_cost<=1000)
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

