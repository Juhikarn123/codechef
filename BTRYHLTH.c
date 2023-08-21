#include <stdio.h>

int main(void) {
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int battery_health;
        scanf("%d",&battery_health);
        if(battery_health>=80)
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

