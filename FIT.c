#include <stdio.h>

int main(void) 
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int km,total_distance;
        scanf("%d",&km);
        total_distance=km*10;
        printf("%d\n",total_distance);
    }
	return 0;
}

