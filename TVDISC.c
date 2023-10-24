#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int xa,ya,xb,yb;
	    scanf("%d %d %d %d",&xa,&ya,&xb,&yb);
	    int first=xa-xb;
	    int second=ya-yb;
	    if(first>second)
	    {
	        printf("Second\n");
	    }
	    else if(first<second)
	    {
	        printf("First\n");
	    }
	    else if(first==second)
	    {
	        printf("Any\n");
	    }
	}
	return 0;
}

