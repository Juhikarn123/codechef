#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int t1=a*100;
	    int t2=b*10;
	    if(t1>=t2)
	    {
	        printf("Cloth\n");
	    }
	    else
	    {
	        printf("Disposable\n");
	    }
	}
	return 0;
}

