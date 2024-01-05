#include <stdio.h>

int makeBeautifulTree(int juhi, int jashi, int nit) 
{
    int patta = nit / 3;
    int jashi1, patta1;
    
    if (jashi >= patta) 
    {
        jashi1 = jashi - patta;
        patta1 = patta;
    } 
    else 
    {
        jashi1 = 0;
        patta1 = jashi;
    }
    
    int patta2 = jashi1 / 2;
    
    return (patta2 + patta1 >= juhi);
}

int main() 
{
    int testcase;
    scanf("%d", &testcase);
    
    while (testcase--) 
    {
        int juhi, jashi, nit;
        scanf("%d%d%d", &juhi, &jashi, &nit);
        
        if (makeBeautifulTree(juhi, jashi, nit))
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}