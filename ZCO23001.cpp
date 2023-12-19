#include <bits/stdc++.h>

using namespace std;

int findF(int k, vector<int> &v){
    int f = 0, x = v[0];
    while(true){
        // pretend to delete
        f++;
        auto itr = upper_bound(v.begin(), v.end(),x+k);
        if(itr == v.end()){
            break;
        }else{
            x = *itr;
        }
    }
    return f;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, a;
    cin>>n>>a;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    vector<int> ans(a+1);
    for(int k = 0; k <= a; k++){
        ans[k] = findF(k,v);
    }
    reverse(ans.begin(), ans.end());
    int q;
    cin>>q;
    while(q--){
        int f;
        cin>>f;
        auto itr = upper_bound(ans.begin(), ans.end(), f);
        itr--;
        int idx = itr-ans.begin();
        cout<<a-idx<<'\n';
    }
    return 0;
}