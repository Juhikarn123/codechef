#include<stdio.h>
int main()
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int worth_point,passed_testcase,score;
        scanf("%d %d",&worth_point,&passed_testcase);
        score=(worth_point/10)*passed_testcase;
        printf("%d\n",score);
    }
}