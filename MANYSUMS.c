#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int n1,n2;
	    scanf("%d %d",&n1,&n2);
	    printf("%d\n",2*(n2-n1)+1);
	}
}

