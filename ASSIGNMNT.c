#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int juhi,jashi,nit;
	    scanf("%d %d %d",&juhi,&jashi,&nit);
	    int day_to_minute=nit*24*60;
	    int total_time_need=juhi*jashi;
	    if(total_time_need<=day_to_minute)
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

