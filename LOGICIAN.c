#include <stdio.h>
#include <string.h>
void juhi(int jashi, char nit[]) 
{
    int flag = 0;

    for (int i = 0; i < jashi - 1; i++) 
    {
        if (flag == 1) 
        {
            printf("NO\n");
        } 
        else if (nit[i] == '0') 
        {
            flag = 1;
            printf("NO\n");
        } 
        else 
        {
            printf("IDK\n");
        }
    }

    if (flag == 0 && nit[jashi - 1] == '1') 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }
}

int main() 
{
    int testcase;
    scanf("%d", &testcase);

    while(testcase--) 
    {
        int jashi;
        scanf("%d", &jashi);

        char nit[100];  
        scanf("%s", nit);

        
        juhi(jashi, nit);
    }

    return 0;
}
