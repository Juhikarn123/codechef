#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int juhi;
	    scanf("%d",&juhi);
	    if(juhi%2==0 ||juhi==1)
	    {
	        printf("Bob\n");
	    }
	    else
	    {
	        printf("Alice\n");
	    }
	}
	return 0;
}

