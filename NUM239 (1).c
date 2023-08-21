#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase,lower,upper;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int cnt=0;
	    scanf("%d %d",&lower,&upper);
	    for(int x=lower;x<=upper;x++)
	    {
	        if((x%10==2 || x%10==3 || x%10==9))
	        cnt++;
	    }
	    printf("%d\n",cnt);
	}
	return 0;
}

