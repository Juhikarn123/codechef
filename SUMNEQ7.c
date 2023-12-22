#include <stdio.h>

int areAllElementsEqual(int juhi[], int jashi) 
{
    for (int i = 1; i < jashi; i++) 
    {
        if (juhi[i] != juhi[0])
            return 0; 
    }
    return 1; 
}

int main() 
{
    int testcase;
    scanf("%d", &testcase);

    while (testcase--) 
    {
        int jashi;
        scanf("%d", &jashi);
        int juhi[jashi];

        
        for (int i = 0; i < jashi; i++) 
        {
            scanf("%d", &juhi[i]);
        }

        
        if (areAllElementsEqual(juhi, jashi)) 
        {
            printf("NO\n");
        } 
        else 
        {
            
            if (jashi == 4 && (juhi[0] + juhi[1] == juhi[2] + juhi[3])) 
            {
                printf("NO\n");
            } 
            else 
            {
                printf("YES\n");
            }
        }

        
    }

    return 0;
}
