#include <stdio.h>

int main(void)
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int current_rating,desired_rating,need;
	    scanf("%d %d",&current_rating,&desired_rating);
	 
	    need=desired_rating-current_rating;
	    if(need%8==0)
	    {
	        printf("%d\n",need/8);
	    }
	    else
	    {
	        printf("%d\n",(need/8)+1);
	    }
	}
	return 0;
}

