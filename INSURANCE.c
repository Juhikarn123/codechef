#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int carprice,damage,return_mon;
	    scanf("%d %d",&carprice,&damage);
	    if(carprice>=damage)
	    {
	     return_mon=damage;   
	    }
	    else
	    {
	        return_mon=carprice;
	    }
	    printf("%d\n",return_mon);
	}
	return 0;
}

