

#include<stdio.h>

#include<stdlib.h>

struct contest{
	int stime;
	int etime;
};
int comp1 (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int comp2 (const void * p, const void * q) {
   int l = ((struct contest *)p)->stime;
    int r = ((struct contest *)q)->stime; 
    return (l - r);
}
int main(){
int n,x,y,j,i,k,enter[1000000],leave[1000000],start,end,min=1000000,low,low1,high,mid;
        scanf("%d",&n);
        scanf("%d",&x);
        scanf("%d",&y);
	struct contest cont[1000000];
        for(i=0;i<n;i++){
	        scanf("%d",&cont[i].stime);scanf("%d",&cont[i].etime);
        }
        for(i=0;i<x;i++){
	        scanf("%d",&enter[i]);
	}
        
        for(i=0;i<y;i++){
	        scanf("%d",&leave[i]);
        }
	qsort(enter,x,sizeof(enter[0]),comp1);
	qsort(leave,y,sizeof(leave[0]),comp1);
	qsort(cont,n,sizeof(cont[0]),comp2);
	low1=0;
        for(k=0;k<n;k++){
		
		if(enter[0]>cont[k].stime){continue;}
		else if(enter[0]==cont[k].stime){start=enter[0];}
		else if(enter[x-1]<=cont[k].stime){start=enter[x-1];}
		else{low1=0;high=x-1;
			while(low1!=high){
				mid=(high+low1)/2;
				if(enter[mid]<=cont[k].stime){
					low1=mid+1;
				}
				else {
					high=mid;
				}
			}
			start=enter[high-1];low1=high-1;
		}
		if(leave[y-1]<cont[k].etime){continue;}
		else if(leave[y-1]==cont[k].etime){end=leave[y-1];}
		else if(leave[0]>=cont[k].etime){end=leave[0];}
		else{low=0;high=y-1;
			while(low!=high)
                        {
                                mid=(high+low)/2;
 
                                if(leave[mid]<=cont[k].etime)
                                {
                                        low=mid+1;
                                }
 
                                else
                                {
                                        high=mid;
                                }
 
                        }
 
                        if(leave[high-1]==cont[k].etime)
                        {
                                end=leave[high-1];
                        }
 
                        else
                        {
                                end=leave[high];
                        }
		}
         	
                if(min>end-start+1){
                    min=end-start+1;
                }
		
         }
            printf("%d\n",min);
            return 0;
        }