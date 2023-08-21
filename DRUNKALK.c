#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int time;
	    scanf("%d",&time);
	    int steps=0;
	    for(int x=1;x<=time;x++)
	    {
	        if(x%2!=0)
	        {
	            steps=steps+3;
	        }
	        else
	        {
	            steps=steps-1;
	        }
	    }
	    printf("%d\n",steps);
	}
	return 0;
}

