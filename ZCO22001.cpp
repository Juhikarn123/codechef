#include <bits/stdc++.h>
using namespace std;

#define vii vector<vector<int>>
#define vi vector<int>

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n >> m;
    vii arr(n+1, vi(m+1));
    for (int i = 1; i <= n; i++)
    {
    	for (int j = 1; j <= m; j++) 
    		cin >> arr[i][j];
    }
    vii pre(n+1, vi(m+1, 0));
    for (int i = 1; i <= n; i++)
    {
    	for (int j = 1; j <= m; j++)
    	{
    		pre[i][j] = (arr[i][j]==0) + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1];
    	}
    }

    int q; cin >> q;
    while (q--)
    {
    	int a, b, c, d;
    	cin >> a >> b >> c >> d;
    	int ct = pre[c][d] - pre[a-1][d] - pre[c][b-1] + pre[a-1][b-1];
    	if (ct > 0) cout << 0 << endl;
    	else cout << 1 << endl;
    }
}