#include <stdio.h>

int main(void) 
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int discount1,discount2;
        scanf("%d %d",&discount1,&discount2);
        int final_price1=100-(100*discount1/100);
        int final_price2=200-(200*discount2/100);
        if(final_price1>final_price2)
        {
            printf("SECOND\n");
        }
        else if(final_price2>final_price1)
        {
            printf("FIRST\n");
        }
        else
        {
            printf("BOTH\n");
        }
    }
	
	return 0;
}

