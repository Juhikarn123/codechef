#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int c,p,r,earn;
	    scanf("%d %d %d",&c,&p,&r);
	    int available_seat=10*c;
	    if(available_seat>=p)
	    {
	         earn=p*r;
	    }
	    else
	    {
	       earn=available_seat*r;
	    }
	    printf("%d\n",earn);
	}
	return 0;
}

