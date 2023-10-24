#include <stdio.h>

int main() {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int count=2*a+4*b;
	    printf("%d\n",count);
	}
	return 0;
}

