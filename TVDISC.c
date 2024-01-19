#include <stdio.h>

int main(void) 
{
	int i,t,a,b,c,d;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if((a-c)<(b-d))
	    printf("First\n");
	    else if((a-c)==(b-d))
	    printf("Any\n");
	    else 
	    printf("Second\n");
	}
	return 0;
}