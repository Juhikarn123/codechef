#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    long long j,n,s,c=0;
	    scanf("%lld %lld %lld",&j,&n,&s);
	    c=n*s;
	    if(c<j)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}

