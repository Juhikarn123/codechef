#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x1,y1,x2,y2;
	    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	    int c1=x1+y1;
	    int c2=x2+y2;
	    if(c1==c2)
	    {
	        printf("%d\n",c1);
	    }
	    else if(c1<c2)
	    {
	        printf("%d\n",c1);
	    }
	    else if(c1>c2)
	    {
	        printf("%d\n",c2);
	    }
	    
	}

}

