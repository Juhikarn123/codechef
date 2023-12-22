#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	if(a<3)
	{
	    printf("GOLD\n");
	}
	else if(a<6 &&a>=3)
	{
	    printf("SILVER\n");
	}
	else
	{
	    printf("BRONZE\n");
	}
	return 0;
}

