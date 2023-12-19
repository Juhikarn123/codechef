#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

using namespace std;


bool dfs(ll st, vector<ll>& side, const vector<vector<pair<ll,bool>>>& adj, bool group, int& a, int& b){

	bool possible = true;
	side[st] = group;
	a += group;
	b += !group;
	for(auto pr: adj[st]){
		bool ty = pr.second ? !side[st] : side[st];
		
		if(side[pr.first] == -1){
			possible &= dfs(pr.first, side, adj, ty, a, b);
		} else {
			possible &= side[pr.first] == ty;
		}
	}
	return possible;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        ll n,q; cin >> n >> q;
    	vector<vector<pair<ll,bool>>> adj(n);
    	vector<ll> side(n,-1);
    
    	for(ll i = 0; i < q; i++){
    		
    		ll type, a,b; 
    		cin >> type >> a >> b; // true / 1 means accuse
    		
    		adj[--a].push_back({--b, type == 1});
    		adj[b].push_back({a, type == 1});
    	}
    
    	bool possible = true;
    	int ans = 0, a = 0, b = 0;
    
    	for(ll i = 0; i < n; i++){
    		if(side[i] != -1) continue;
    		a = 0; 
    		b = 0;
    		possible &= dfs(i, side, adj, 1, a, b);
    		ans += max(a,b);
    		if(possible == false){
    		    break;
    		}
    	}
    	
    	if(possible){
    		cout << ans << "\n";
    	}
    	else {
    		cout << -1 << "\n";
    	}
    }
	return 0;
}