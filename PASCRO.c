#include <stdio.h>

int main(void) {
	// your code goes here
	int testcase;
	scanf("%d",&testcase);
	while(testcase--)
	{
	    int nit;
	    scanf("%d",&nit);
	    char juhi[nit],jashi[nit];
	    scanf("%s\n",juhi);
	    scanf("%s",jashi);
	    int count1=0,count2=0;
	    for(int i=0;i<nit;i++)
	    {
	        if(juhi[i]==jashi[i])
	        {
	            continue;
	        }
	        
	         else if(juhi[i]=='R' &&jashi[i]=='S')
	        {
	            count1++;
	        }
	        else if(juhi[i]=='S' &&jashi[i]=='R')
	        {
	            count2++;
	        }
	        else if(juhi[i]=='S' &&jashi[i]=='P')
	        {
	            count1++;
	        }
	        else if(juhi[i]=='P' &&jashi[i]=='S')
	        {
	            count2++;
	        }
	         else if(juhi[i]=='P' &&jashi[i]=='R')
	        {
	            count1++;
	        }
	         else if(juhi[i]=='R' &&jashi[i]=='P')
	        {
	            count2++;
	        }
	        
	    }
	    int j=0;
	    if(count2>=count1)
	    {
	        j=(count1+count2)/2;
	        j+=1;
	       printf("%d\n",j-count1);
	    }
	    else
	    {
	        printf("0\n");
	    }
	    
	}
	return 0;
}

