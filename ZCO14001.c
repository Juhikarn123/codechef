#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// your code goes here
	int N,H,j=0,t=0,v,i;
	scanf("%d %d",&N, &H);
	int a[N];
    for(i=0;i<N;i++)
	{
	    scanf("%d",&a[i]);
	}
	    scanf("%d",&v);
	    while(v!=0){       
	            if(v==1){
	            if(j==0)
	            ;
	            else{
	            j=j-1;
	            ;}
	            //printf("move left from %d and it has %d boxes",j,a[j]);
	        }
	        else if(v==2){
	            if(j==N-1)
	            ;
	            else{
	            j=j+1;
	            ;}
	            //printf("move right from %d and it has %d boxes",j,a[j]);
	        }
	        else if(v==3){
	            if(t==1)
	            ;
	            else if(a[j]==0)
	            ;
	            else{
	            t=1;
	            a[j]=a[j]-1;
	            ;}
	            //printf("pickup from %d and it has %d boxes",j,a[j]);}
	        }
	        else if(v==4){
	            if(t==0)
	            ;
	            else if(a[j]==H)
	            ;
	            else{
	            t=0;
	            a[j]=a[j]+1;
	            ;}
	           // printf("drop from %d and it has %d boxes",j,a[j]);}
	        }//printf(" from %d and it has %d boxes",j,a[j]);
	        scanf("%d",&v);
	    }
	for(int i=0;i<N;i++){
	printf("%d ",a[i]);
    }	
	return 0;
}