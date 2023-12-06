#include <stdio.h>

int main(void) {
    int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int a;
	    scanf("%d",&a);
	    if(a<=100)
	    {
	        printf("%d\n",a);
	    }
	    else
	    {
	        printf("%d\n",a-10);
	    }
	}
	return 0;
}

