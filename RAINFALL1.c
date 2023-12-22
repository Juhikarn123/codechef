#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a;
	    scanf("%d",&a);
	    if(a<3)
	    {
	        printf("LIGHT\n");
	    }
	    else if(a>=3 && a<7)
	    {
	        printf("MODERATE\n");
	    }
	    else
	    {
	        printf("HEAVY\n");
	    }
	}
	return 0;
}

