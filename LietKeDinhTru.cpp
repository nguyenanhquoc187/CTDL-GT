#include <bits/stdc++.h>
using namespace std;
int chuaxet[1005], n , e;
vector<int> v[1005];
void DFS(int u) {
    chuaxet[u] = 0;
    for (int i=0;i<v[u].size();i++) if ( chuaxet[ v[u][i]] ) DFS(v[u][i]); 
}
void Duyet_tru() {
    for (int i=1;i<=n;i++) chuaxet[i] = 1;
    int check ;
    for (int i=1;i<=n;i++) {
        check = 0;
        chuaxet[i] = 0;
        if (i == n ) DFS(i-1); else DFS(i+1);
        for (int j=1;j<=n;j++) if (chuaxet[j] ) check =1;
        if (check) cout << i << " ";
        for (int j=1;j<=n;j++ ) chuaxet[j] = 1;
    }
}
int main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        cin >> n >> e;
        for (int i=0;i<e;i++) {
            int x,y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        Duyet_tru();
        cout <<endl;
        for (int i=1;i<=n;i++) v[i].clear();
    }
}