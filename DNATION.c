#include <stdio.h>

int main(void) {
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int chef_money,chefina_money;
	    scanf("%d %d",&chef_money,&chefina_money);
	    int charity_money=chefina_money-chef_money;
	    printf("%d\n",charity_money);
	}
	return 0;
}

