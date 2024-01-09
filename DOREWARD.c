#include <stdio.h>

int main(void) {
			int i,t;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
    int x;
    scanf("%d",&x);
    if(x<=3)
    printf("BRONZE\n");
    else if(x>3 && x<=6)
    printf("SILVER\n");
    else
    printf("GOLD\n");
}
	return 0;
}
