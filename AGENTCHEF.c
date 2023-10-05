#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int chef_dollar;
	    scanf("%d",&chef_dollar);
	    double percent=(double)chef_dollar/100;
	    percent*=20;
	    int need=ceil((double)100.0/percent);
	    printf("%d\n",need);
	}
	return 0;
	
}

