#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int fee,p,t;
	    scanf("%d %d %d",&fee,&p,&t);
	    int wt=p-t;
	    int fine=fee*wt;
	    printf("%d\n",fine);
	}
	return 0;
}

