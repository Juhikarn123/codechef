#include <stdio.h>

int main(void) {
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int payTax,earn,invest;
	    scanf("%d %d",&payTax,&earn);
	    invest=payTax-earn;
	    printf("%d\n",invest);
	}
	return 0;
}

