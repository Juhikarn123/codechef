#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int n;
	    scanf("%d",&n);
	    int d=n*100/100;
	    int pay=100-d;
	    printf("%d\n",pay);
	}
	return 0;
}

