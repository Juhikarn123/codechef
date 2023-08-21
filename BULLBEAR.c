#include <stdio.h>

int main(void) {
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int cost_price,selling_price;
	    scanf("%d %d",&cost_price,&selling_price);
	    if(cost_price>selling_price)
	    {
	        printf("LOSS\n");
	    }
	    else if(cost_price<selling_price)
	    {
	        printf("PROFIT\n");
	    }
	    else if(cost_price==selling_price)
	    {
	        printf("NEUTRAL\n");
	    }
	}
	
	return 0;
}

