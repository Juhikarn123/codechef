#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int w1,w2,x1,x2,m;
	    scanf("%d %d %d %d %d",&w1,&w2,&x1,&x2,&m);
	    int min=x1*m;
	    int max=x2*m;
	    int increase=w2-w1;
	    if(increase<min)
	    {
	        printf("0\n");
	    }
	    else if(increase>=min && increase<=max)
	    {
	        printf("1\n");
	    }
	    else if(increase>max)
	    {
	        printf("0\n");
	    }
	}
	return 0;
}

