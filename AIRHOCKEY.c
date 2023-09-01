#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a>=b)
	    {
	        printf("%d\n",7-a);
	    }
	    else if(a<b)
	    {
	        printf("%d\n",7-b);
	    }
	}
	return 0;
}

