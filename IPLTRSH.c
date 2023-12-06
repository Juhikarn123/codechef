#include <stdio.h>

int main(void) {
	// your code goes here
		int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int c=a-b;
	    if(a<=b)
	    {
	        printf("0\n");
	    }
	    else
	    
	    printf("%d\n",c);
	    
	}
	return 0;
}

