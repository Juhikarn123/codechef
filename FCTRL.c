#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int sample;
	    scanf("%d",&sample);
	    int cnt=0;
	    while(sample>=5)
	    {
	        sample=sample/5;
	        cnt=cnt+sample;
	    }
	    printf("%d\n",cnt);
	}
	return 0;
}

