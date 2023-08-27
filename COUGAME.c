#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int girl,boy;
	    scanf("%d %d",&girl,&boy);
	    int left_boy=boy-girl;
	    printf("%d\n",left_boy);
	}
	return 0;
}

