#include <stdio.h>

int main(void) 
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int number,digit=7,rem,count=0;
        scanf("%d",&number);
        while(number!=0)
        {
            rem=number%10;
            if(rem==digit)
            count++;
            number=number/10;
        }
        if(count!=0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
	return 0;
}

