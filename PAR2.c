#include <stdio.h>

int main(void) {
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int chocolate;
	   scanf("%d",&chocolate);
	   if(chocolate%2==0)
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

