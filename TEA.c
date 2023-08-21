#include <stdio.h>

int main(void)
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int tea_drink,tea_capacity,rupees;
	    scanf("%d %d %d",&tea_drink,&tea_capacity,&rupees);
	    if(tea_drink%tea_capacity==0)
	    {
	        printf("%d\n",(tea_drink/tea_capacity)*rupees);
	    }
	    else if(tea_drink<tea_capacity)
	    {
	        printf("%d\n",rupees);
	    }
	    else if(tea_drink%tea_capacity!=0)
	    {
	        printf("%d\n",rupees*((tea_drink/tea_capacity)+1));
	    }
	}
	return 0;
}

