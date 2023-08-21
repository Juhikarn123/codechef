#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int x;
	    scanf("%d",&x);
	    int a[x];
	    for(int i=0;i<x;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int maximum=0;
	    for(int i=0;i<x;i++)
	    {
	        int c=0;
	        for(int j=0;j<x;j++)
	        {
	            if(a[i]==a[j])
	            {
	                c++;
	            }
	        }
    	    if(c>maximum)
    	    {
    	        maximum=c;
    	    }
	    }
	    printf("%d\n",x-maximum);
	    
	}
	
	return 0;
}

