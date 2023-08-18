#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int rating;
	    scanf("%d",&rating);
	    if(rating<100 && rating>=0)
	    {
	        printf("Easy\n");
	    }
	    else if(rating>=100 && rating <200)
	    {
	        printf("Medium\n");
	    }
	    else if(rating>=200 && rating<=300)
	    {
	        printf("Hard\n");
	    }
	}
	return 0;
}

