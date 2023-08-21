#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int number,c=0;
	    scanf("%d",&number);
	    int arr[number];
	    for(int i=0;i<number;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    for(int i=0;i<number-1;i++)
	    {
	        for(int j=0;j<number-i-1;j++)
	        {
	            if(arr[j]>arr[j+1])
	            {
	                int temp=arr[j];
	                arr[j]=arr[j+1];
	                arr[j+1]=temp;
	            }
	        }
	    }
	    for(int i=0;i<number;i++)
	    {
	        if(i==number-1 || arr[i]!=arr[i+1])
	        {
	            c++;
	        }
	    }
	    printf("%d\n",c);
	}
	return 0;
}

