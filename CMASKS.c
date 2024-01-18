#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int x,y;
	    scanf("%d",&x);
	    scanf("%d",&y);
	    if(x*100>y*10){
	        printf("cloth\n");
	    }
	    else if(x*100<y*10){
	        printf("disposable\n");
	    }
	    else if(x*100==y*10){
	        printf("cloth\n");
	    }
	}
	return 0;
}
