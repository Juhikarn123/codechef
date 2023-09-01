#include <stdio.h>

int main(void) {
	// your code goes here
	int old,neww;
	scanf("%d %d",&old,&neww);
    if(old<neww)
    {
        printf("Old\n");
    }
    else if(old>neww)
    {
        printf("New\n");
    }
    else if(old==neww)
    {
        printf("Same\n");
    }
	return 0;
}

