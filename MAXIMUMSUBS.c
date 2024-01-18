#include <stdio.h>
#include <math.h>
int main(void) 
{
	int i,t,x,totTime;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&x);
	    totTime = x*60 - 5;
	    printf("%.f\n",ceil(totTime/30.0));
	}
	return 0;
}
