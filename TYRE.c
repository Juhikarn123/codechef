#include <stdio.h>

int main()
{
int t,i,c,b,n,m;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
    scanf("%d %d",&n,&m);
    c=4*m;
    b=2*n;
    printf("%d\n",c+b);
}
	return 0;
}
