#include<stdio.h>

#include<stdlib.h>

long long min(long long a, long long b){
	if(a<=b){
		return a;
	}
	return b;
}
int main(void){
	size_t n;
	scanf("%zu",&n);
	long long cost[1000000];
	long long *cost1;
	cost1=malloc(1000000*sizeof(long long));
	for(size_t i=0;i<n;i++){
		scanf("%lld",&cost[i]);
		if(i<n-1){
			cost1[i+1]=cost[i];
		}
		else{
			cost1[0]=cost[i];
		}
	}
	if(n>2){
		for(size_t i=2;i<n;i++){
			cost[i]+=min(cost[i-1],cost[i-2]);
		}
		for(size_t i=2;i<n;i++){
			cost1[i]+=min(cost1[i-1],cost1[i-2]);
		}
		printf("%lld",min(cost[n-1],cost1[n-1]));
	}
	else if(n==2){
		printf("%lld",min(cost[0],cost[1]));
	}
	else{
		printf("%lld",cost[0]);
	}
}