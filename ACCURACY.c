#include <stdio.h>

int main(void) 
{
     int testcase;
     scanf("%d",&testcase);
     while(testcase--)
     {
         int marks;
         scanf("%d",&marks);
         if(marks%3==0)
         {
             printf("0\n");
         }
         else
         {
             printf("%d\n",3-(marks%3));
         }
     }
	return 0;
}

