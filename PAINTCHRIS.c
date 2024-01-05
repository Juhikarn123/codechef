#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    int total=a*b;
	    int paint_wall=c/2;
	    int able_paint=paint_wall/total;
	    printf("%d\n",able_paint);
	}

}

