#include <stdio.h>

int main(void) {
	int t;
	
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,z;
	
    	scanf("%d %d %d",&x,&y,&z);
    	
    	if((x * 10) >= y)
    	{
    	    printf("%d \n", y * z);
    	    
    	}else{
    	    printf("%d \n", x * z *  10);
    	}
	}
	return 0;
}
