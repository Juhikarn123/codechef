#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int plate,person;
	    scanf("%d %d",&plate,&person);
	    
	   int feed=plate/person;
	   if(feed>20)
	   {
	       feed=20;
	   }
	   printf("%d\n",feed);
	    
	}
	return 0;
}

