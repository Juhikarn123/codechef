#include <stdio.h>

int main(void) {
	// your code goes here
	int hour;
	scanf("%d",&hour);
	if(hour<3)
	{
	    printf("GOLD\n");
	}
	else if(hour<6 && hour>=3)
	{
	    printf("SILVER\n");
	}
	else if(hour>=6)
	{
	    printf("BRONZE\n");
	}
	return 0;
}

