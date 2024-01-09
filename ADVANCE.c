#include <stdio.h>

int main(void) {
int n,x,y;
scanf("%d",&n); 
while(n--){
    scanf("%d%d",&x,&y);
    if(y<=x+200&&y>=x)
    printf("\nYES");
    else
    printf("\nNO");} 
// your code goes here
	return 0;
}
