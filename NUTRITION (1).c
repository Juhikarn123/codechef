#include <stdio.h>

#define maxi 1000

int main() 
{
    int testcase;
    scanf("%d", &testcase);
    while (testcase--) 
    {
        int juhi,jashi[maxi],nit[maxi];
        int apsana[maxi] = {0};
        scanf("%d", &juhi);

        
        for (int i = 0; i < juhi; ++i) 
        {
            scanf("%d", &jashi[i]);
        }

       
        for (int i = 0; i < juhi; ++i) 
        {
            scanf("%d", &nit[i]);
        }

        

        for (int i = 0; i < juhi; ++i) 
        {
            int titi = jashi[i];
            if(apsana[titi]>nit[i])
            {
                apsana[titi]=apsana[titi];
            }
            else
            {
                apsana[titi]=nit[i];
            }
           
        }

        int Sum = 0;
        for (int i = 0; i < maxi; ++i) {
            Sum += apsana[i];
        }

        printf("%d\n", Sum);
    }

    return 0;
}
