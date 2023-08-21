#include <stdio.h>

int main(void) 
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        int need,collected,rem;
        scanf("%d %d",&need,&collected);
        rem=need-collected;
        printf("%d\n",rem);
    }
	
	return 0;
}

