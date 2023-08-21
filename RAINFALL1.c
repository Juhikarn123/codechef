#include <stdio.h>

int main(void) 
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int n;
        scanf("%d",&n);
        if(n<3)
        {
            printf("LIGHT\n");
        }
        if(n>=3 && n<7)
        {
            printf("MODERATE\n");
        }
        if(n>=7)
        {
            printf("HEAVY\n");
        }
    }
	return 0;
}

