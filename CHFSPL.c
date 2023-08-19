#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int j,arr[10];
	    for(j=0;j<3;j++)
	    {
	        scanf("%d",&arr[j]);
	    }
	    int minimum=arr[0];
	    int summation=0;
	    for(j=0;j<3;j++)
	    {
	        summation+=arr[j];
	        if(arr[j]<minimum)
	        {
	            minimum=arr[j];
	        }
	    }
	    int total=summation-minimum;
	    printf("%d\n",total);
	}
}

