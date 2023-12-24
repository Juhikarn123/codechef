#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a;
	    scanf("%d",&a);
	    int minute=a*60;
	    int games=minute/20;
	    printf("%d\n",games);
	}

}

