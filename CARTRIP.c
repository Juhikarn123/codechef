#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,rup;
	    scanf("%d",&a);
	    if(a<=300)
	    {
	        rup=300*10;
	    }
	    else
	    {
	        rup=a*10;
	    }
	    printf("%d\n",rup);
	}

}

