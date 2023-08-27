#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    int max=(a>=b&&a>=c)?a:(b>=a&&b>=c)?b:c;
        int min=(a<=b&&a<=c)?a:(b<=a&&b<=c)?b:c;
        int diff=max-min;
        printf("%d\n",diff);
	}
	return 0;
}

