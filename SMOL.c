#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    int c=n-k;
	    if(n>=k && k!=0)
	    {
	        printf("%d\n",n%k);
	    }
	    else
	    {
	        printf("%d\n",n);
	    }
	}
	return 0;
}

