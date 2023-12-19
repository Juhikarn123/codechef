#include<bits/stdc++.h>
using namespace std;

const int MAXN = 3000;
vector<int> adj[MAXN];
vector<int> level(MAXN,1);
vector<bool> vis(MAXN);

void dfs(int u){
  vis[u] = true;
  for(int v : adj[u]){
    if(!vis[v]){
      dfs(v);
    }
    level[u] = max(level[u],level[v] + 1);
  }
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while(tt--){
    int N,L;
    cin >> N >> L;
    vector<int> arr(N);
    for(int i = 0;i<N;i++){
      cin >> arr[i];
    }
    int maxi = 0;
    for(int i = 0;i<N;i++){
      for(int j = 0;j<i;j++){
        if(arr[i] == arr[j]){
          maxi = max(maxi,i - j);
        }
      }
    }
    if(L > N){
      cout << maxi << '\n';
      continue;
    }
    auto solve=[&](int k){

      for(int i = 0;i<N;i++){
        adj[i].clear();
        level[i] = 1;
        vis[i] = false;
         for(int j = 0;j<N;j++){
          if(arr[i] > arr[j] && abs(i - j) >= k){
            adj[i].push_back(j);
          }
        }
      }
      for(int i = N - 1;i>=0;i--){
        if(!vis[i]){
          dfs(i);
        }
      }
      int maxl = 0;
      for(int i = 0;i<N;i++){
        maxl = max(maxl,level[i]); 
      }
      return maxl;
    };
    int ans = maxi;
    int s = maxi;
    int e = N;
    while(e >= s){
      int mid = (s + e) / 2;
      if(solve(mid) >= L){
        s = mid + 1;
        ans = mid;
      }else{
        e = mid - 1;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}