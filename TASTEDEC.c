#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int a1=a*2;
	    int b1=b*5;
	    if(a1>b1)
	    {
	        printf("Chocolate\n");
	    }
	    else if(a1==b1)
	    {
	        printf("Either\n");
	    }
	    else
	    {
	        printf("Candy\n");
	    }
	}
	return 0;
}

