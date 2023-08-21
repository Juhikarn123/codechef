#include <stdio.h>

int main(void) {
	// your code goes here
    int new_user,nsub,nsol,sub,sol;
    scanf("%d %d %d",&new_user,&nsub,&nsol);
    sub=new_user-nsub;
    sol=sub-nsol;
    printf("%d %d",sub,sol);
	
	return 0;
}

