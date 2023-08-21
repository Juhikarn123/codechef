//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.

#include <stdio.h>

int main(void) {
	// your code goes here
	
	int testcase;
	scanf("%d",&testcase);
	
	while(testcase--)
	{
	      int n;
	    scanf("%d",&n);
	    
	    int cnt=0;
	    while(n)
	    {
	        int x=(n%10);
	        
	        if(x==4) 
	        cnt++;
	        
	        n/=10;
	    }
	    printf("%d\n",cnt);
	}
	  
	
	return 0;
}



