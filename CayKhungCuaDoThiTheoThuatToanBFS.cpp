#include <bits/stdc++.h>
using namespace std;
int chuaxet[1005], n , e;
vector<int> v[1005];
vector<pair<int,int> > T;
void BFS_tree(int u) {
    for (int i=1;i<=n;i++) chuaxet[i] = 1;
    queue<int> q;
    chuaxet[u] = 0;
    q.push(u);
    while ( !q.empty() ) {
        int s = q.front();
        q.pop();
        for (int i=0;i<v[s].size();i++) {
            if ( chuaxet[v[s][i] ] ) {
                T.push_back( {s, v[s][i] } );
                q.push(v[s][i]);
                chuaxet[ v[s][i] ] = 0;
            }
        }
    }
}
int main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int u; 
        cin >> n >> e >> u;
        for (int i=0;i<e;i++) {
            int x,y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        BFS_tree(u);
        if (T.size() < n- 1) cout << -1 << endl; else {
            for (int i=0;i<T.size();i++) cout<<T[i].first << " " << T[i].second << endl;
        }
        T.clear();
        for (int i=1;i<=n;i++) v[i].clear();
    }
}