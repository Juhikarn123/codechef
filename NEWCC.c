#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<b)
	{
	    printf("Old\n");
	}
	else if(b<a)
	{
	    printf("New\n");
	}
	else
	{
	    printf("Same\n");
	}

}

