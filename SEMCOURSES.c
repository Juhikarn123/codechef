#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
    {
       int course,unit,chapter;
       scanf("%d %d %d",&course,&unit,&chapter);
       int total=course*unit*chapter;
       printf("%d\n",total);
    }
	return 0;
}

