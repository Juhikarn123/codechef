#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int t1=a*2+b*1;
	int t2=c*2+d*1;
	if(t1==t2)
	{
	    printf("Equal\n");
	}
	else if(t1>t2)
	{
	    printf("Messi\n");
	}
	else
	{
	    printf("Ronaldo\n");
	}
	return 0;
}

