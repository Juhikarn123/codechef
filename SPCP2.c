#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    double juhi,jashi;
	    int more_airline;
	    scanf("%lf %lf",&juhi,&jashi);
	    int need_airline=(int)ceil(jashi/100);
	    if(need_airline<=juhi)
	    {
	       more_airline=0;
	    }
	    else
	    {
	     more_airline=need_airline-juhi;   
	    }
	    printf("%d\n",more_airline);
	    
	}
	return 0;
}

