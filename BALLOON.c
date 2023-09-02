#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int count=0,i,l;
	    scanf("%d",&l);
	    int arr[l];
	    for(i=0;i<l;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    int c=0;
	    for(i=0;i<l;i++)
	    {
	        if(arr[i]<8)
	        {
	            count++;
	        }
	        if(count==7)
	        {
	            c=i;
	            break;
	        }
	    }
	    printf("%d\n",c+1);
	}
	return 0;
}

