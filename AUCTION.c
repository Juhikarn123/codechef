#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int n1,n2,n3;
	    scanf("%d %d %d",&n1,&n2,&n3);
	    if(n1>n2 && n1>n3)
	    {
	        printf("Alice\n");
	    }
	    else if(n2>n1 && n2>n3)
	    {
	        printf("Bob\n");
	    }
	    else if(n3>n1 && n3>n2)
	    {
	        printf("Charlie\n");
	    }
	    
	    
	}
	return 0;
}

