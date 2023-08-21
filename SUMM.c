#include <stdio.h>

int main(void) 
{
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int number1,number2,Bob_sum;
	    scanf("%d %d %d",&number1,&number2,&Bob_sum);
	    int sum=number1+number2;
	    if(Bob_sum==sum)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("No\n");
	    }
	}
	return 0;
}

