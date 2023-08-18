#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int max,sum,difference=0;
	    scanf("%d %d",&max,&sum);
	    if(max>=sum)
	    difference=sum;
	    else
	    difference=2*max-sum;
	    printf("%d\n",difference);
	}
	return 0;
}

