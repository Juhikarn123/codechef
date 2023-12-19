#include <bits/stdc++.h>

using namespace std;

//in-contest submission from back then
//good times
pair<int,int> p[5010]; //length, idx
int q[5010], t[5010];

bool comp (pair<int,int> a, pair<int,int> b){
    if (t[a.second] > t[b.second]) return false;
    else return true;
}

void sol(){
    int N,M;
    cin >> N >> M;
    for (int i=0; i<N; i++) cin >> q[i];
    int x;
    for (int i=0; i<M; i++){
        cin >> x;
        p[i] = make_pair(x,i);
    }
    for (int i=0; i<M; i++) cin >> t[i];
    
    sort(p,p+M,comp);
    
    int latest[M];
    latest[M-1] = t[p[M-1].second];
    for (int i=M-2; i>=0; i--){
        latest[i] = min(latest[i+1] - p[i].first, t[p[i].second]);
    }
    
    int earliest[M];
    earliest[0] = max(1, t[p[0].second] - p[0].first + 1);
    for (int i=1; i<M; i++){
        earliest[i] = max(earliest[i-1] + p[i-1].first, t[p[i].second] - p[i].first + 1);
    }
    
    for (int i=0; i<M; i++){
        if (earliest[i] > t[p[i].second]){
            cout << -1 << "\n";
            return;
        }
    }
    
    int Ccount = 0;
    long long pos = 0;
    long long placement[M];
    for (int i=0; i<M; i++){
        while (pos+q[Ccount] < latest[i] && Ccount < N){
            pos+= (q[Ccount]);
            //cout << pos << 'q' << Ccount << endl;
            Ccount++;
        }
        if (pos > earliest[i]-1) placement[i] = pos;
        else placement[i] = earliest[i]-1;
        //placement[i] = max(earliest[i]-1, pos);
        pos = placement[i] + p[i].first;
        //cout << pos << 'p' << i << endl;
    }
    //cout << "pos" << pos << endl;
    //cout << "cc" << Ccount << endl;
    if (Ccount != N){
        for (int i=Ccount; i<N; i++){
            pos += q[i];
            //cout << "pos" << pos <<  endl;
        }
    }
    cout << pos << "\n";
    return;
}

int main(){
    int T;
    cin >> T;
    for (int i=0; i<T; i++){
        sol();
    }
}