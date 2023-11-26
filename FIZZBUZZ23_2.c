#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int j,n,s;
	    scanf("%d %d %d",&j,&n,&s);
	    int dg=n*5;
	    int left=j/dg;
	    printf("%d\n",s+left);
	}
	return 0;
}

