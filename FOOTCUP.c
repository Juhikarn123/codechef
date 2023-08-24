#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int team1,team2;
	    scanf("%d %d",&team1,&team2);
	    if(team1==0 || team2==0)
	    {
	        printf("NO\n");
	    }
	    else if(team1==team2)
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

