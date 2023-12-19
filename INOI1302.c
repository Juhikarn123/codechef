#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmpfunc(const void * a,const void * b){
    return (*(int*)a - *(int*)b);
}

int main(void) {
	// your code goes here
	int N,K,s,i,j,c=1,a=0;
	int x[300][302];
	int q[300];
	int *p1=q;
	int *p2=q+1;
	q[0]=0;
	scanf("%d%d",&N,&K);
	
	for(i=0;i<N;i++){
	    scanf("%d",&x[i][0]);
	    for(j=1;j<=x[i][0];j++)
	    scanf("%d",&x[i][j]);
	    qsort(&x[i][1],x[i][0],sizeof(int),cmpfunc);
	    x[i][301]=0;
	}
	while(p1 != p2){
	    for(i=0;i<N;i++){
	        if(i != *p1 && x[i][301]!=1){
	        a=1;
	        s=0;
	        for(j=1;j<=x[i][0];j++){
	            while(x[*p1][a]<x[i][j] && a<x[*p1][0])
	            a++;
	            if(x[*p1][a] == x[i][j])
	            s++;
	        }
	        if(s>=K){
	            c++;
	            *p2 = i;
	            x[i][301] = 1;
	            p2++;
	        }
	    }
	}
	x[*p1][0]=0;
	p1++;
}
printf("%d\n", c);
	return 0;
}