#include <stdio.h>

int main(void) 
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int temp1,temp2,temp3;
        scanf("%d %d %d",&temp1,&temp2,&temp3);
        if(temp2>=temp1 && temp2>=temp3)
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

