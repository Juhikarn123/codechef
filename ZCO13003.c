#include <stdio.h>
typedef long long ll;
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int main(void) {
	ll n,k,count=0;
	scanf("%lld%lld",&n,&k);
	ll a[n];
	for(int i=0;i<n;i++){
	    scanf("%lld",&a[i]);
	}
	int j=n-1;
	qsort(a,n,8,cmpfunc);
	for(int i=0;i<n;i++){
	        while(j>0 && a[j]+a[i]>=k){
	            j--;
	        }
	        if(j>i){
	            count+=(j-i);
	        }
	        else{
	            break;
	        }
	}
	printf("%lld\n",count);
	return 0;
}
