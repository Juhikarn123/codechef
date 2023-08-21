#include <stdio.h>

int main(void) {
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int required_chair,available_chair;
	    scanf("%d %d",&required_chair,&available_chair);
	    int need_chair=required_chair-available_chair;
	    if(required_chair>available_chair)
	    {
	        printf("%d\n",need_chair);
	    }
	    if(required_chair<=available_chair)
	    {
	        printf("0\n");
	    }
	}
	return 0;
}

