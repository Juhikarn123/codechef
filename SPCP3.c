#include <stdio.h>

int main() 
{
    int testcase;
    scanf("%d", &testcase);

    while (testcase--) 
    {
        int juhi, jashi;
        scanf("%d %d", &juhi, &jashi);

        if (jashi > juhi) 
        {
            int count = 0;
            for (; juhi % jashi != 0; juhi++, jashi--) 
            {
                
                count++;
            }
            printf("%d\n", count);
        } 
        else 
        {
            if (juhi % jashi == 0) 
            {
                printf("0\n");
            } 
            else 
            {
                int count1 = 0, count2 = 0;
                int tempJuhi = juhi;
                int tempJashi = jashi;

                for (; juhi % jashi != 0; juhi++, jashi--) 
                {
                    count1++;
                }

                for (; tempJuhi % tempJashi != 0; tempJuhi--, tempJashi++) 
                {
                    count2++;
                }

                if(count1<count2)
                {
                    printf("%d\n",count1);
                }
                else
                {
                    printf("%d\n",count2);
                }
            }
        }
    }

    return 0;
}
