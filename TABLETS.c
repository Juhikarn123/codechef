#include <stdio.h>

int main(void) {
	// your code goes here
		int T;
	scanf("%d",&T);
	while(T--)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(x<=y/3)
	    printf("\n yes");
	    else
	    printf("\n no");
	}

	return 0;
}
