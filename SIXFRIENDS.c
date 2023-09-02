#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int doublee,triple;
	    scanf("%d %d",&doublee,&triple);
	    int d_cost=3*doublee;
	    int t_cost=2*triple;
	    if(d_cost<=t_cost)
	    {
	        printf("%d\n",d_cost);
	    }
	    else
	    {
	        printf("%d\n",t_cost);
	    }
	}
	return 0;
}

