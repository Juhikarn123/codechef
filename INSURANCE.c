#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t!=0)
    {
        int x,y;
        scanf("%d %d", &x, &y);
        if(x>y)
        {
            printf("%d \n",y);
        }
        else if (x==y)
        {
            printf("%d \n",x);
        }
        else
        printf("%d \n",x);
        t--;
    }
	// your code goes here
	return 0;
}
