#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int fuel,distance;
	    scanf("%d %d",&fuel,&distance);
	    int limit_distance=fuel*5;
	    if(distance<=limit_distance)
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

