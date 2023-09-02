#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int l,b,cost;
	    scanf("%d %d %d",&l,&b,&cost);
	    int p=2*l+2*b;
	    int t_cost=p*cost;
	    printf("%d\n",t_cost);
	}
	return 0;
}

