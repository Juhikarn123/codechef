#include <stdio.h>

int main(void) {
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int total_space,xfile,yfile;
	    scanf("%d %d %d",&total_space,&xfile,&yfile);
	    int remaining_space=xfile*1+yfile*2;
	    if(remaining_space<=total_space)
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

