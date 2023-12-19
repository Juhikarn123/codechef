#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> g(n);
        for(int i = 0;i < m; ++i){
            int x, y;
            cin >> x >> y;
            --x; --y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        vector<long long> a(n);
        for(int i = 0;i < n; ++i){
            cin >> a[i];
        }
        vector<vector<int>> comp;
        vector<int> cc, vis(n, 0);
        auto dfs = [&](auto dfs, int u){
            if(vis[u])return;
            vis[u] = 1;
            cc.push_back(u);
            for(auto x : g[u]){
                dfs(dfs, x);
            }
        };
        for(int i = 0;i < n; ++i){
            cc.clear();
            if(vis[i] == 0){
                dfs(dfs, i);
                comp.push_back(cc);
            }
        }
        if(comp.size() < k){
            cout << "-1\n";
            continue;
        }
        multiset<long long> s;
        for(auto x : comp){
            long long ans = 0;
            for(auto y : x){
                ans += a[y];
            }
            s.insert(ans);
        }   
        long long ans = 0, flg = 0;
        while(k--){
            long long add = 0;
            if(flg == 0){
                flg = 1;
                add = *(--s.end());
                s.erase(--s.end());
            }else{
                add = *s.begin();
                s.erase(s.begin());
                flg = 0;
            }
            ans += add;
        }
        cout << ans << '\n';
    }
}