#include <stdio.h>

int main(void) 
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(30*y<=x)
	    {
	        printf("\nyes");
	    }
	    else
	    {
	        printf("\nno");
	    }
	}
	return 0;
}
