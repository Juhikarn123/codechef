#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int d=a*7;
	    int rem=d-b;
	    printf("%d\n",rem);
	}
	return 0;
}

