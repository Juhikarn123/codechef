#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int available,interested;
	    scanf("%d %d",&available,&interested);
	    if(available>=interested)
	    {
	        printf("0\n");
	    }
	    else
	    {
	        printf("%d\n",interested-available);
	    }
	}

}

