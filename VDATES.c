#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int day1,day2,day3;
	    scanf("%d %d %d",&day1,&day2,&day3);
	    if(day1>=day2 && day1<=day3)
	    {
	        printf("Take second dose now\n");
	    }
	    else if(day1>day3)
	    {
	        printf("Too Late\n");
	    }
	    else if(day1<day2)
	    {
	        printf("Too Early\n");
	    }
	}
	return 0;
}

