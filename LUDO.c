#include <stdio.h>

int main(void) 
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int dice;
        scanf("%d",&dice);
        if(dice==6)
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

