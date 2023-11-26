#include <stdio.h>
int main()
{
     int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int juhi;
        scanf("%d",&juhi);
        int z=0;
        int o=1;
        if(juhi<=4)
        {
            printf("%d %d\n",z,juhi);
        }
        else
        {
            printf("%d %d\n",o,juhi-o);
        }
    }
}
