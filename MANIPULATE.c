#include <stdio.h>

int main(void) 
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int X,Y;
	    scanf("%d%d",&X,&Y);
	    if(X>=Y)
	    {
	        printf("\nYES");
	    }
	    else
	    {
	        printf("\nNO");
	    }
	}
	return 0;
}
