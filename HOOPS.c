#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int hoop;
	    scanf("%d",&hoop);
	    if(hoop==1)
	    {
	        printf("1\n");
	    }
	    else if(hoop%2==0)
	    {
	        printf("%d\n",hoop/2);
	    }
	    else 
	    {
	        printf("%d\n",(hoop/2)+1);
	    }
	}
	return 0;
}

