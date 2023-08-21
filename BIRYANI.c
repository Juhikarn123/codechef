#include <stdio.h>

int main(void) 
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int week,coin,total_amount;
        scanf("%d %d",&week,&coin);
        total_amount=week*coin;
        printf("%d\n",total_amount);
        
    }
	return 0;
}

