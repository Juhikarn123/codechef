#include <stdio.h>

int main(void) {
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int week,days;
	    scanf("%d %d",&week,&days);
	    int remaining_day=7*week-days;
	    printf("%d\n",remaining_day);
	}
	return 0;
}

