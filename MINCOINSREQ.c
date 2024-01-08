#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int x;
	    scanf("%d",&x);
	    if(x>10)
	        printf("%d\n",x%10);
	    else if(x<10)
	        printf("%d\n",x);
	    else
	        printf("0\n");
	}
	return 0;
}
