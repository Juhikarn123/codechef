#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int available,interested;
	    scanf("%d %d",&available,&interested);
	    if((available==interested) ||(available>interested))
	    {
	        printf("0\n");
	    }
	    else if(available<interested)
	    {
	        printf("%d\n",interested-available);
	    }
	    
	}
	return 0;
}

