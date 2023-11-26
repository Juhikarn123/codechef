#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int petrol,dis;
	    scanf("%d %d",&petrol,&dis);
	    int total_dis=2*dis;
	    int dis_can=15*petrol;
	    if(total_dis<=dis_can)
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

