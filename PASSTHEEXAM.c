#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    int total=a+b+c;
	    if(total>=100 && a>=10 && b>=10 && c>=10)
	    {
	        printf("PASS\n");
	    }
	    else
	    {
	        printf("FAIL\n");
	    }
	}
	return 0;
}

