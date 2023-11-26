#include <stdio.h>

int Min(int num1, int num2) 
{
    return (num1 < num2) ? num1 : num2;
}

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int juhi,i,j=0;
	    scanf("%d",&juhi);
	    int jashi[juhi];
	    for(i=0;i<juhi;i++)
	    {
	        scanf("%d",&jashi[i]);
	        j=j^jashi[i];
	    }
	    int minimum=1e9;
	    for(i=0;i<juhi;i++)
	    {
	        int nit=j^jashi[i];
	        minimum=Min(minimum,nit);
	    }
	    minimum=Min(minimum,j);
	    printf("%d\n",minimum);
	}
	return 0;
}

