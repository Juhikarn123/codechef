#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int num1,num2;
	    scanf("%d %d",&num1,&num2);
	    int array[10]={6,2,5,5,4,5,6,3,7,6};
	    int total_Sum=num1+num2;
	    int count=0;
	    while(total_Sum>0)
	    {
	        int rem=total_Sum%10;
	        count=count+array[rem];
	        total_Sum=total_Sum/10;
	    }
	    printf("%d\n",count);
	}
	return 0;
}

