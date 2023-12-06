#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,d;
	scanf("%d %d\n",&a,&b);
	scanf("%d %d",&c,&d);
	int t1=a*c;
	int t2=b*d;
	int t=t1+t2;
	printf("%d\n",t);
	return 0;
}

