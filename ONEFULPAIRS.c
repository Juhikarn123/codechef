#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b;
	scanf("%d %d",&a,&b);
	int pair=a+b+(a*b);
	if(pair==111)
	{
	    printf("Yes\n");
	}
	else
	{
	    printf("No\n");
	}
	return 0;
}

