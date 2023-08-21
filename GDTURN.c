#include <stdio.h>

int main(void) 
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int dice1,dice2,sumofnumbers;
	    scanf("%d %d",&dice1,&dice2);
	    sumofnumbers=dice1+dice2;
	    if(sumofnumbers>6)
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

