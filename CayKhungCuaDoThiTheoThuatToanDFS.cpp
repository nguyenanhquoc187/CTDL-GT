#include <bits/stdc++.h>
using namespace std;
int chuaxet[1005], n , e;
vector<int> v[1005];
vector<pair<int,int> > T;
void DFS_tree(int u) {
    chuaxet[u] = 0;
    for (int i=0;i<v[u].size();i++) if ( chuaxet[ v[u][i]] ) {
        T.push_back( {u,v[u][i]} );
        DFS_tree(v[u][i]); 
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
        for (int i=1;i<=n;i++) chuaxet[i] = 1;
        DFS_tree(u);
        if (T.size() < n- 1) cout << -1 << endl; else {
            for (int i=0;i<T.size();i++) cout<<T[i].first << " " << T[i].second << endl;
        }
        T.clear();
        for (int i=1;i<=n;i++) v[i].clear();
    }
}