#include <stdio.h>

int isConditionMet(int juhi, int jashi, int nit) 
{
    return (juhi * jashi / 2) < nit;
}

int main(void) {
    int testcase;
    scanf("%d", &testcase);

    while (testcase--) {
        int juhi, jashi, nit;
        scanf("%d %d %d", &juhi, &jashi, &nit);

        
        if (isConditionMet(juhi, jashi, nit)) 
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
