#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int juhi,jas;
	    scanf("%d %d",&juhi,&jas);
	    int array[juhi];
	    for(int i=0;i<juhi;i++)
	    {
	        int nit;
	        scanf("%d",&nit);
	        array[i]=nit;
	    }
	    int c=0;
	    for(int i=0;i<(juhi-jas)+1;i++)
	    {
	        for(int j=i;j<i+jas;j++)
	        {
	            if(array[j]%2==1)
	            {
	                c++;
	                break;
	            }
	        }
	    }
	    printf("%d\n",c);
	}
	return 0;
}

