#include <stdio.h>

int main(void)
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int patties,buns;
	    scanf("%d %d",&patties,&buns);
	    if(patties<buns)
	    {
	        printf("%d\n",patties);
	    }
	    else
	    {
	        printf("%d\n",buns);
	    }
	}
	return 0;
}

