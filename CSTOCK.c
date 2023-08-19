#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int a_price,r1,r2,per;
	    scanf("%d %d %d %d",&a_price,&r1,&r2,&per);
	    double total=a_price;
	    total=total+total*per/100;
	    if(total>=r1 && total<=r2)
	    {
	        printf("Yes\n");
	    }
	    else
	    {
	        printf("No\n");
	    }
	}
	return 0;
}

