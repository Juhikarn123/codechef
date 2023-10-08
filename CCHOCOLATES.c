#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int n1,n2,n3;
	    scanf("%d %d %d",&n1,&n2,&n3);
	    int total=n1*5+n2*10;
	    int choc=total/n3;
	    printf("%d\n",choc);
	}
	return 0;
}

