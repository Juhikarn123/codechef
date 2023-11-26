#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	   long long number;
	   scanf("%d",&number);
	   int ans=number-1;
	   printf("%d %d\n",ans,number);
	}
	return 0;
}

