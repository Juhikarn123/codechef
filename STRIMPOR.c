#include <stdio.h>
#define int long long
signed main(void){
	int T;
	scanf("%lld",&T);
	while(T--){
	    int N,K;
	    scanf("%lld%lld",&N,&K);
	    int a[N];
	    int i,j,k;
	    for(i=0;i<N;i++){
	        char c;
	        scanf(" %c", &c);
	        a[i] = c - 'X' + 1;
	        //printf("%d ",a[i]);
	    }
        int comp0x[N],comp1x[N],comp2x[N],comp0z[N],comp1z[N],comp2z[N];
        if(a[0]==1)comp0x[0]=1;
        else comp0x[0]=0;
        comp1x[0]=comp2x[0]=comp1z[0]=comp2z[N]=0;
        if(a[0]==3)comp0z[0]=1;
        else comp0z[0]=0;
        for(i=1;i<N;i++){
            if(a[i]==1){
                if(i%3==0){
                   comp0z[i]=comp0z[i-1];
                   comp1z[i]=comp1z[i-1];
                   comp2z[i]=comp2z[i-1];
                   comp0x[i]=comp0x[i-1]+1;
                   comp1x[i]=comp1x[i-1];
                   comp2x[i]=comp2x[i-1];
                }
                if(i%3==1){
                   comp0z[i]=comp0z[i-1];
                   comp1z[i]=comp1z[i-1];
                   comp2z[i]=comp2z[i-1];
                   comp0x[i]=comp0x[i-1];
                   comp1x[i]=comp1x[i-1]+1;
                   comp2x[i]=comp2x[i-1];
                }
                if(i%3==2){
                   comp0z[i]=comp0z[i-1];
                   comp1z[i]=comp1z[i-1];
                   comp2z[i]=comp2z[i-1];
                   comp0x[i]=comp0x[i-1];
                   comp1x[i]=comp1x[i-1];
                   comp2x[i]=comp2x[i-1]+1;
                }               
            }
            else if(a[i]==2){
                   comp0z[i]=comp0z[i-1];
                   comp1z[i]=comp1z[i-1];
                   comp2z[i]=comp2z[i-1];
                   comp0x[i]=comp0x[i-1];
                   comp1x[i]=comp1x[i-1];
                   comp2x[i]=comp2x[i-1];
            }
            else if(a[i]==3){
                if(i%3==0){
                   comp0z[i]=comp0z[i-1]+1;
                   comp1z[i]=comp1z[i-1];
                   comp2z[i]=comp2z[i-1];
                   comp0x[i]=comp0x[i-1];
                   comp1x[i]=comp1x[i-1];
                   comp2x[i]=comp2x[i-1];
                }
                if(i%3==1){
                   comp0z[i]=comp0z[i-1];
                   comp1z[i]=comp1z[i-1]+1;
                   comp2z[i]=comp2z[i-1];
                   comp0x[i]=comp0x[i-1];
                   comp1x[i]=comp1x[i-1];
                   comp2x[i]=comp2x[i-1];
                }
                if(i%3==2){
                   comp0z[i]=comp0z[i-1];
                   comp1z[i]=comp1z[i-1];
                   comp2z[i]=comp2z[i-1]+1;
                   comp0x[i]=comp0x[i-1];
                   comp1x[i]=comp1x[i-1];
                   comp2x[i]=comp2x[i-1];
                }
            }
        }//comp computation ends
        int presum[N],sufsum[N];
        presum[0]=0;
        for(i=1;i<N;i++){
            if(a[i]==3){
                if(i%3==0){
                    presum[i]=presum[i-1]+comp1x[i];
                }
                if(i%3==1){
                    presum[i]=presum[i-1]+comp2x[i];
                }
                if(i%3==2){
                    presum[i]=presum[i-1]+comp0x[i];
                }
            }
            else presum[i]=presum[i-1];
        }
        sufsum[N-1]=0;
        for(i=N-2;i>=0;i--){
            if(a[i]%3==1){
                if(i%3==0){
                    sufsum[i]=sufsum[i+1]+comp2z[N-1]-comp2z[i];
                }
                if(i%3==1){
                    sufsum[i]=sufsum[i+1]+comp0z[N-1]-comp0z[i];
                }
                if(i%3==2){
                    sufsum[i]=sufsum[i+1]+comp1z[N-1]-comp1z[i];
                }
            }
            else sufsum[i]=sufsum[i+1];
        }
        int min=100000000000;
        for(i=0;i<N;i++){
           // printf("pre %d suf %d\n",presum[i],sufsum[i]);
        }
        for(i=0;i<=N-K;i++){
            int calc;
            if(i==0){
                calc=presum[N-1]-sufsum[K];
            }
            else if(i==N-K){
                calc=presum[N-1]-presum[N-K-1];
            }
            else{
                calc=presum[N-1]-presum[i-1]-sufsum[i+K];
            }
            if(calc<min)min=calc;
        }
        if(N==K)printf("%lld\n",presum[N-1]);
        else printf("%lld\n",min);
	}
	return 0;
}