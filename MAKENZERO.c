#include <stdio.h>


int canMakeZero(int juhi) {
   
    if (juhi == 0) 
    {
        return 1;
    }

    
    if (juhi < 0 ) 
    {
        return 0;
    }

    
    return canMakeZero(juhi - 3) || canMakeZero(juhi - 4);
}

int main() 
{
    int testcase; 
    scanf("%d", &testcase);

    while (testcase--) 
    {
        int juhi;
        scanf("%d", &juhi);

       
        if (canMakeZero(juhi)) 
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
