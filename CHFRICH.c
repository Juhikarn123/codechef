#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int inp1,inp2,inp3;
	    scanf("%d %d %d",&inp1,&inp2,&inp3);
	    int worth=inp2-inp1;
	    int year=worth/inp3;
	    printf("%d\n",year);
	    
	}
	return 0;
}

