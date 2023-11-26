#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int number,count=0,day=2;
	    scanf("%d",&number);
	    while(day<=number)
	    {
	        day+=7;
	        count++;
	    }
	    printf("%d\n",count);
	}
	return 0;
}

