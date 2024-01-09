#include <stdio.h>
int main() 
{
    int T,X,Y,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d",&X,&Y);
        if(X<Y)
        printf("FIRST\n");
        else if(X==Y)
        printf("ANY\n");
        else if(X>Y)
        printf("SECOND\n");
    }
    return 0;
}