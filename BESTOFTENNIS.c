#include<stdio.h>

int Max(int num1, int num2) 
{
    return (num1 > num2) ? num1 : num2;
}


int Min(int num1, int num2) 
{
    return (num1 < num2) ? num1 : num2;
}

int main() 
{
    int testcase;
    scanf("%d", &testcase);

    while (testcase--) 
    {
        int juhi, jashi;
        scanf("%d %d", &juhi, &jashi);
        int maximum=Max(juhi,jashi);
        int minimum=Min(juhi,jashi);
        int totalll=juhi+jashi;
        totalll=totalll+(maximum-minimum-1);
        printf("%d\n",totalll);
    }

    return 0;
}
