#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(a>b && a>c)
	    {
	        printf("Setter\n");
	    }
	    else if(b>a && b>c)
	    {
	        printf("Tester\n");
	    }
	    else if(c>b && c>a)
	    {
	        printf("Editorialist\n");
	    }
	}
	return 0;
}

