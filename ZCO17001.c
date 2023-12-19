#include <stdio.h>



int main() {

	long long int n,k;
	scanf("%lld %lld",&n,&k);
	long long int A[n];
	for(int i=0;i<n;i++)
	    scanf("%lld",&A[i]);
	long long int c=0,cout[k+1];
    for(long long int i=0;i<=k;i++)
        cout[i] = 0;
    for(long long int i=0;i<n;i++){
     for(long long int j=i+1;j<n;j++)
         if(k>A[i]+A[j])
            c += cout[k-A[i]-A[j]];
     for(long long int j=0;j<i;j++)
        if(k>A[i]+A[j])
            cout[A[i]+A[j]]++;
    }
	 printf("%lld\n",c);
	return 0;
}