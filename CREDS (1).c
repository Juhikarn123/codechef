#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    int d=a*4+b*2+c*0;
	    printf("%d\n",d);
	}
	
	return 0;
}

