#include <stdio.h>
int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int total,d1,d2,d3;
	    scanf("%d %d %d %d",&total,&d1,&d2,&d3);
	    if(d2>=total && (d1+d3)>=total)
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

