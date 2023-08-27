#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	   int speed;
	   scanf("%d",&speed);
	   if(speed<=70)
	   {
	       printf("0\n");
	   }
	   else if(speed>70 &&speed<=100)
	   {
	       printf("500\n");
	   }
	   else if(speed>100)
	   {
	       printf("2000\n");
	   }
	}
	return 0;
}

