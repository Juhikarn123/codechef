#include <stdio.h>

int main(void) 
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int Chef_rank;
	    scanf("%d",&Chef_rank);
	    if(Chef_rank<=10)
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

