#include <stdio.h>

int main(void)
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int input,cnt=0;
        scanf("%d",&input);
        int question[input];
        for(int x=0;x<input;x++)
        {
            scanf("%d",&question[x]);
            if(question[x]>=1000)
            {
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }

	return 0;
}

