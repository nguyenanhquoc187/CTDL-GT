#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int n,m, chuaxet[10001] ;
vector<pair<int,int> > v;
vector<int> ke[1001];
void DFS(int u) {
    chuaxet[u] = 0;
    for (int i=0;i<ke[u].size();i++) {
        if (chuaxet[ ke[u][i]] ) DFS(ke[u][i] ) ;
    }
}
int Count_TPLT() {
    int dem = 0;
    for (int i=1;i<=n;i++) chuaxet[i] = 1;
    for (int i=1;i<=n;i++) {
        if (chuaxet[i] ) {
            dem++;
            DFS(i);
        }
    }
    return dem;
}
void Reset() {
    for (int i=1;i<=n;i++) ke[i].clear();
}
void Duyet_Canh_Cau(int dem , int canh ) {
    Reset();
    for (int i=0;i<v.size();i++) {
        if (i!= canh) {
            ke[v[i].first].push_back(v[i].second);
            ke[v[i].second].push_back(v[i].first);
        }
    }
    int res = Count_TPLT();
    if (res > dem) cout<<v[canh].first << " "<<v[canh].second << " ";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        cin >> n >> m;
        for (int i =0;i<m;i++) {
            int x,y;
            cin >> x >> y;
            v.push_back( {x,y} );
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        int dem = Count_TPLT() ;
        for (int i=0;i<v.size();i++) {
            Duyet_Canh_Cau(dem,i);
        }
        cout<<endl;
        v.clear();
    }
}