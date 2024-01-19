#include <stdio.h>

int main(void) {
	// your code goes here
	int one;
	scanf("%d",&one);
	while(one--){
	    int two,three;
	    scanf("%d %d",&two,&three);
	    if(two>three)
	    { 
	        printf("new phone \n");
	    }
	    else if(two<three)
	    {
	        printf("repair \n");
	    }
	    else{printf("any \n");}
	}
	return 0;
}
