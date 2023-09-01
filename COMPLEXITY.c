#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int a_algo,b_algo;
	    scanf("%d %d",&a_algo,&b_algo);
	    if(a_algo<=b_algo)
	    {
	        printf("NO\n");
	    }
	    else
	    {
	        printf("YES\n");
	    }
	}
	return 0;
}

