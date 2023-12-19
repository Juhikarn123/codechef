#include<stdio.h>
long long int mod=20011;
long long int dp[305][305][2];
int a[305][305];
int main()
{
//	freopen("in.txt","r",stdin);
	int r,c,i,j,k,d;
	scanf("%d %d %d",&r,&c,&d);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	
	for(i=0;i<=d && i<r;i++)
	{
		if(a[i][0]==0)
			break;
		dp[i][0][0]=0;
		dp[i][0][1]=1;
	}
	
	for(i=0;i<=d && i<c;i++)
	{
		if(a[0][i]==0)
			break;
		dp[0][i][0]=1;
		dp[0][i][1]=0;
	}
	
	for(i=1;i<r;i++)
	{
		for(j=1;j<c;j++)
		{
			if(a[i][j]==0)
			{
				dp[i][j][0]=0;
				dp[i][j][1]=0;
				continue;
			}
			dp[i][j][0]=0;
			dp[i][j][1]=0;
			for(k=i-1;k>=0 && k>i-d-1;k--)
			{
				if(a[k][j]==0)
					break;
				dp[i][j][1]+=dp[k][j][0];
				dp[i][j][1]%=mod;
			}
			
			for(k=j-1;k>=0 && k>j-d-1;k--)
			{
				if(a[i][k]==0)
					break;
				dp[i][j][0]+=dp[i][k][1];
				dp[i][j][0]%=mod;
			}
		}
	}
	printf("%lld\n",(dp[r-1][c-1][0]+dp[r-1][c-1][1])%mod);
	
	return 0;
}