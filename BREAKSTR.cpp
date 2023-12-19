#include <bits/stdc++.h>
using namespace std;
#define int long long

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
const int maxn = 5e6 + 5;
int imb[maxn];
int minsuf[maxn];
int maxsuf[maxn];

void Solve() 
{
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    
    s = "2" + s;
    
    //int imb[n+1];
    imb [0] = 0;
    //imb
    for (int i=1; i<=n; i++)
    {
        imb[i] =  imb[i-1];
        if (s[i]=='1')
        imb[i]++;
        else imb[i]--;
    }
    
    int last = 0;
    string form = "";
    
    //int minsuf[n+1];
    //int maxsuf[n+1];
    
    minsuf[n] = imb[n];
    maxsuf[n] = imb[n];
    for (int i=n-1; i>=1; i--)
    {
        minsuf[i] = min(minsuf[i+1], imb[i]);
        maxsuf[i] = max(maxsuf[i+1], imb[i]);
    }
    
    form = "1";
    
    for (int i=2; i<=n; i++)
    {
        if (minsuf[i] - last > k || last - maxsuf[i] > k)
        {
        form += "1";
        last = imb[i-1];
        }
        else form += "0";
    }
    cout<<form<<"\n";
}

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) 
    {
        //cout << "Case #" << i << ": ";
        Solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}