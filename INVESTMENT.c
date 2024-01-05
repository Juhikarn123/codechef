#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int in_rate,inf_rate;
	    scanf("%d %d",&in_rate,&inf_rate);
	    int twice=inf_rate*2;
	    if(twice<=in_rate)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}

}

