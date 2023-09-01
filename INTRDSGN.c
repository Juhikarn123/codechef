#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int x1,y1,x2,y2;
	    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	    int f_cost=x1+y1;
	    int s_cost=x2+y2;
	    if(f_cost<s_cost)
	    {
	        printf("%d\n",f_cost);
	    }
	    else
	    {
	        printf("%d\n",s_cost);
	    }
	}
	return 0;
}

