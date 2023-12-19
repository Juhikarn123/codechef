#include<stdio.h>
#include<limits.h>
int main(void)
{
	int n,a,b,c,sum=0,min=INT_MAX,max=INT_MIN,aMax;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d %d",&a,&b,&c);
		sum+=a;
		if(min>(b+c))
		min=b+c;
		if(b+c>max)
		{
		    max=b+c;
		    aMax=a;
		}
	}
	if(aMax+max>sum+min)
	printf("%d\n",aMax+max);
	else
	printf("%d\n",sum+min);
	return 0;
}