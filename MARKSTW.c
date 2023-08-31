#include <stdio.h>

int main(void) {
	// your code goes here
	int alice,bob;
	scanf("%d %d",&alice,&bob);
	int final=2*bob;
	if(final<=alice)
	{
	    printf("Yes\n");
	}
	else 
	{
	    printf("No\n");
	}
	return 0;
}

