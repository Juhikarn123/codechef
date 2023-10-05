#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int juhi,dg;
	    scanf("%d %d",&juhi,&dg);
	    char n[juhi+1];
	    char s[dg+1];
	    scanf("%s",n);
	    scanf("%s",s);
	    int minimum_moves=999;
	    n[juhi]='\0';
	    s[dg]='\0';
	    for(int i=0;i<=juhi-dg;i++)
	    {
	        int m=0;
	        for(int j=0;s[j]!='\0';j++)
	        {
	            int diff=abs(n[i+j]-s[j]);
	            if(diff>5)
	            {
	                diff=10-diff;
	            }
	            m+=diff;
	        }
	        if(m<minimum_moves)
	        {
	            minimum_moves=m;
	        }
	    }
	    printf("%d\n",minimum_moves);
	}
	return 0;
}

