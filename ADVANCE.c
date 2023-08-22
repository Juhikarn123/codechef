#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int current_rating,practice_rating;
	    scanf("%d %d",&current_rating,&practice_rating);
	    int rec=current_rating+200;
	    if(practice_rating>=current_rating && practice_rating<=rec)
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

