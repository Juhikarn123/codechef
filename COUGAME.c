#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int g,b;
	    scanf("%d %d",&g,&b);
	    int rem_b=b-g;
	    printf("%d\n",rem_b);
	}

}

