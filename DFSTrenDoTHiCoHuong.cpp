#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
class graph {
public:
    int n , m, u ;
    vector<pair<int,int> > v;
    int chuaxet[MAX];
    void readdata() ;
    void itit();
    void dfs(int u);
};
void graph::readdata() {
    cin >> n >> m >> u;
    for (int i=0;i<m;i++) {
        int x,y;
        cin >> x >> y;
        v.push_back( pair<int,int>(x,y) );
    }
}
void graph::itit() {
    for (int i=1;i<=n;i++) chuaxet[i] = 1;
}
void graph::dfs(int u) {
    cout<<u<<" ";
    chuaxet[u]= 0;
    for (int i=0;i<m;i++) {
        if ( v[i].first == u && chuaxet[v[i].second] == 1) dfs(v[i].second); 
        if ( v[i].second == u&& chuaxet[v[i].first] == 1) dfs(v[i].first);
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        graph g;
        g.readdata();
        g.itit();
        g.dfs(g.u);
        cout<<endl;
    }
}
