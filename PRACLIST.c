#include <stdio.h>

int main(void)
{
	
	int all,attempted,unattempted;
	scanf("%d %d",&all,&attempted);
	unattempted=all-attempted;
	printf("%d",unattempted);
	return 0;
}

