#include <stdio.h>

int main(void) {
    int hgwp;
    scanf("%d",&hgwp);
    while(hgwp--){
        int mkl,loi;
        scanf("%d %d",&mkl,&loi);
        int wpk=mkl*5;
        if(wpk>=loi) printf("YES\n");
        else printf("NO\n");
    }
	// your code goes here
	return 0;
}
