#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int fr,cost,money;
	    scanf("%d %d %d",&fr,&cost,&money);
	    int need_money=fr*cost;
	    if(need_money<=money)
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

