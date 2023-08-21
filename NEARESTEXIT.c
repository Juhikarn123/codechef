#include <stdio.h>

int main(void) 
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int seat;
        scanf("%d",&seat);
        if(seat<=50)
        {
            printf("LEFT\n");
        }
        else
        {
            printf("RIGHT\n");
        }
    }
	return 0;
}

