#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int car1,car2,total;
	    scanf("%d %d",&car1,&car2);
	    total=car1*5+car2*7;
	    printf("%d\n",total);
	    
	    
	}
	return 0;
}

