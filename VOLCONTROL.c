#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x>y)
	    {
	        printf("%d\n",x-y);
	    }
	    else
	    {
	        printf("%d\n",y-x);
	    }
	}
	return 0;
}
