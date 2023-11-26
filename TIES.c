#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int number,sum=0;
	    scanf("%d",&number);
	    int arr[number];
	    for(int i=0;i<number;i++)
	    {
	        scanf("%d",&arr[i]);
	        sum+=arr[i];
	    }
	    if(sum%number==0)
	    {
	        int flag=1;
	        int average=sum/number;
	        for(int i=0;i<number;i++)
	        {
	            if((average-arr[i])%2!=0)
	            {
	                flag=0;
	                break;
	            }
	        }
	        if(flag)
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
	return 0;
}

