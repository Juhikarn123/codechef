#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase,num_day,rup,d,sum,i,j;;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    scanf("%d %d",&num_day,&rup);
	    int arr[num_day];
	    for(int i=0;i<num_day;i++)
	    {
	        scanf("%d",&arr[i]);
	    
    	    for(int j=0;j<i;j++)
    	    {
    	        if(arr[i]>arr[j])
    	        {
    	            d=arr[i];
    	            arr[i]=arr[j];
    	            arr[j]=d;
    	        }
    	    }
	    }
	    sum=0;
    	for(int i=0;i<num_day;i++)
    	{
    	    sum=sum+arr[i];
    	    if(sum>=rup)
    	    {
    	        printf("%d\n",num_day-i-1);
    	        break;
    	    }
    	}
	}
	
	
	return 0;
}

