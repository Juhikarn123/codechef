#include <stdio.h>

int main(void) {
	// your code goes here
	
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	   int a,b;
	   scanf("%d %d",&a,&b);
	   int j=a/10;
	   int total=j*b;
	   printf("%d\n",total);
	}
	return 0;
}

