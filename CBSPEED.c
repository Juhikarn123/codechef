#include <stdio.h>

int main(void) {
	// your code goes here
	int threshold_speed,current_speed;
	scanf("%d %d",&threshold_speed,&current_speed);
	if(current_speed>threshold_speed)
	{
	    printf("YES\n");
	}
	else
	{
	    printf("NO\n");
	}
	return 0;
}

