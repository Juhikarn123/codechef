#include <stdio.h>

int main(void) 
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int cost,mana_point;
	    scanf("%d %d",&cost,&mana_point);
	    int maximum=mana_point/cost;
	    printf("%d\n",maximum);
	}
	return 0;
}

