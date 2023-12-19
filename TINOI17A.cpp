#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int m=(int)1e6 + 10;
vector<int> vis(m, 0);
map<pair<int,int>, int> id;
int r, c, n;
int curr=0, ans=0;
int x[] = {1, -1, 0, 0};
int y[] = {0, 0, 1, -1};

void dfs(int ro, int co) {
    vis[id[{ro, co}]] = true;
    for (int j=0; j<4; j++) {
        int n_row = ro+x[j];
        int n_col = co+y[j];
        if (!id.count({n_row, n_col})) {
            curr++;
        } else {
            if (!vis[id[{n_row, n_col}]]) dfs(n_row, n_col);
        }
    }
}

int main() {
    cin >> r >> c >> n;
	for (int i=0; i<n; i++) {
	    int a, b; cin >> a >> b;
	    a--; b--;
	    id[{a, b}] = i;
	}
	for (auto f: id) {
	    if (vis[f.second]) continue;
	    curr = 0;
	    dfs(f.first.first, f.first.second);
	    ans=max(ans, curr);
	}
	cout << ans;
	return 0;
}