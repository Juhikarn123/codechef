#include <stdio.h>
int main(void) {
int t;
	scanf("%d\n",&t);
	while(t--){
	   int p,q;
	   scanf("%d %d \n",&p,&q);
	   if(p>q) 
	   printf("%d\n",p-q);
	   else
	   printf("%d\n",q-p);
	   }	
	   return 0;
}
