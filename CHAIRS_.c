#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int a,b,c;
	    scanf("%d %d",&a,&b);
	    if(a<b)
	    {
	       c=0;
	    }
	    else
	    {
	        c=a-b;
	    }
	    
	    printf("%d\n",c);
	}
	return 0;
}

