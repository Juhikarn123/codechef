#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int x,c,total;
	    scanf("%d",&x);
	    c=x/2;
	    total=c+(x%2);
	    if(total%2==0)
	    {
	        printf("%d\n",x);
	    }
	    else
	    {
	        printf("%d\n",x-1);
	    }
	}
	return 0;
}

