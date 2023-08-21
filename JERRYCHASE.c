#include <stdio.h>

int main(void) {
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int jerry_speed,tom_speed;
	    scanf("%d %d",&jerry_speed,&tom_speed);
	    if(jerry_speed<tom_speed)
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

