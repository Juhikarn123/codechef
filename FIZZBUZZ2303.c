#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int juhi;
	    scanf("%d",&juhi);
	    long long jas=juhi*(juhi-1);
	    printf("%lld\n",jas);
	}
	return 0;
}

