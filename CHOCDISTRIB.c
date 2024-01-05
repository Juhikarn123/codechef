#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int juhi;
	    int min_possible,max_possible;
	    scanf("%d",&juhi);
	    if(juhi==1)
	    {
	      min_possible=1;
	      max_possible=1;
	    }
	    else if(juhi%2==0)
	    {
	        min_possible=juhi/2;
	        max_possible=juhi;
	    }
	    else
	    {
	        min_possible=(juhi/2)+1;
	        max_possible=juhi;
	    }
	    printf("%d %d\n",min_possible,max_possible);
	    
	    
	}

}

