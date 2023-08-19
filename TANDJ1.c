#include<stdio.h>
#include<stdlib.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int n1,n2,n3,n4,x;
	    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&x);
	    int count=0;
	    count=abs(n1-n3)+abs(n2-n4);
	    if(count==x)
	    {
	        printf("Yes\n");
	    }
	    else
	    {
	        if(x>count)
	        {
	            if((x-count)%2==0)
	            {
	                printf("Yes\n");
	            }
	            else
	            {
	                printf("No\n");
	            }
	        }
	        else
	        {
	            printf("No\n");
	        }
	    }
	}
	return 0;
}

