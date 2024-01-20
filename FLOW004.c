//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.

#include <stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        /* code */
        int num;
        int sum = 0;
        scanf("%d",&num);
        int last = num%10;
        while(num>0)
        {
            int rem = num%10;
            sum = sum*10+rem;
            num = num/10;
        }
        int first = sum%10;
        int result = last+first;
        printf("%d\n",result);

    }
    
}