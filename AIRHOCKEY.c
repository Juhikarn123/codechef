#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d %d",&a,&b);
	    if(a>b)
	    {
	        c=7-a;
	    }
	    else if(a<b)
	    {
	        c=7-b;
	    }
	    else if(a==b)
	    {
	        c=7-a;
	    }
	    printf("%d\n",c);
	}

}

