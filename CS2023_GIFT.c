#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b || a+c>=b)
	{
	    printf("YES\n");
	}
	else
	{
	    printf("NO\n");
	}
	return 0;
}

