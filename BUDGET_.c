#include <stdio.h>

int main(void) {
	// your code goes here
	int tescase;
	scanf("%d",&tescase);
	while(tescase--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int exp=b*30;
	    if(a>=exp)
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

