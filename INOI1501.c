#include<stdio.h>
#include<stdlib.h>
long int n;
long long int *a,*b,*sum;
 
 
int main()
{
	long int i;
	long long int l_max1=-1000000000000,l_max2=-1000000000000,max,s=0,amax=-1000000000000,max1,max2,min1=1000000000000,min2;
	scanf("%ld",&n);
	a=(long long int*)malloc(n*sizeof(long long int));
	b=(long long int*)malloc(n*sizeof(long long int));
	sum=(long long int*)malloc(n*sizeof(long long int));	
	for(i=0;i<n;i++)
	{
		scanf("%lld",(a+i));
		if(amax<*(a+i))
		{
			amax=*(a+i);
		}
	}
	for(i=0;i<n;i++)
	{
		scanf("%lld",(b+i));
		s=s+*(b+i);
		*(sum+i)=s;
	}
	for(i=2;i<n-1;i++)
	{
		max1=*(sum+i)+*(a+i+1);
		if(min1>(*(sum+i-2)-*(a+i-2)))
		{
			min1=*(sum+i-2)-*(a+i-2);
		}
		if(l_max1<(max1-min1))
		{
			l_max1=max1-min1;
		}
	}
	for(i=1;i<n;i++)
	{
		min2=*(sum+i)-*(a+i);
		if(i==1)
		{
			max2=*(a+0);
		}
		else
		{
			if(max2<(*(sum+i-2)+*(a+i-1)))
			{
				max2=*(sum+i-2)+*(a+i-1);
			}
		}
		if(l_max2<(max2-min2+*(sum+n-1)))
		{
			l_max2=max2-min2+*(sum+n-1);
		}
	}
	if(l_max1>l_max2)
	{
		max=l_max1;
	}
	else
	{
		max=l_max2;
	}
	for(i=0;i<n-2;i++)
	{
		if(max<(*(a+i)+*(a+i+2)+*(b+i+1)))
		{
			max=*(a+i)+*(a+i+2)+*(b+i+1);
		}
	}
	for(i=0;i<n-1;i++)
	{
		if(max<(*(a+i)+*(a+i+1)))
		{
			max=*(a+i)+*(a+i+1);
		}
	}
	if(amax>max)
	{
		max=amax;
	}
	printf("%lld",max);
	return 0;
}  