#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int juhi,jashi;
	    scanf("%d %d",&juhi,&jashi);
	    if(juhi-jashi>=0)
	    {
	        printf("0\n");
	    }
	    else
	    {
	        printf("%d\n",(jashi-juhi)*2);
	    }
	}
	return 0;
}

