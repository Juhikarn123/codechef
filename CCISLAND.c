#include <stdio.h>

int main(void) {
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int f,w,fs,ws,day;
	    scanf("%d %d %d %d %d",&f,&w,&fs,&ws,&day);
	    int food_sufficient=f/fs;
	    int water_sufficient=w/ws;
	    int need=min(food_sufficient,water_sufficient);
	    if(need>=day)
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

int min(a,b)
{
    if(a>b)
    return b;
    else
    return a;
}

