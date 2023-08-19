#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    float u,v,a,s;
	    scanf("%f %f %f %f",&u,&v,&a,&s);
	    float total=sqrt((u*u)-(2*a*s));
	    if(v<total)
	    {
	        printf("No\n");
	    }
	    else
	    {
	        printf("Yes\n");
	    }
	}
	return 0;
}

