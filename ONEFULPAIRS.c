#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b;
	scanf("%d %d",&a,&b);
	int t=a+b+a*b;
	if(t==111)
	{
	    printf("Yes");
	}
	else
	{
	    printf("No");
	}
	return 0;
}

