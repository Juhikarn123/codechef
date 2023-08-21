#include <stdio.h>
#include<math.h>


int main(void) 
{
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    double x,y,n;
	    scanf("%lf %lf %lf",&x,&y,&n);
	    int t=x+n/30;
	    printf("%d\n",(int)ceil(t/y));
	}
	return 0;
}

