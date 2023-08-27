#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int need_pass,coll_pass;
	    scanf("%d %d",&need_pass,&coll_pass);
	    int total_need=need_pass+1;
	    if(total_need<=coll_pass)
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

