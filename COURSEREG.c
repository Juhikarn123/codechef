#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    int rem=b-c;
	    if(rem>=a)
	    {
	        printf("Yes\n");
	        
	    }
	    else
	    {
	        printf("No\n");
	    }
	}
	return 0;
}

