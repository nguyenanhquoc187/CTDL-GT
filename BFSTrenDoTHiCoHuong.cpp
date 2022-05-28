#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int chuaxet[100],n, c, a[100][100],dem = 0;
vector<pair<int,int> > v;
void BFS(int u) {
    for (int i=1;i<=n;i++) chuaxet[i] = 1;
    queue<int> q;
    q.push(u);
    chuaxet[u] = 0;
    while (q.size()!=0) {
        int s = q.front();
        q.pop();
        cout<< s<<" ";
        for (int i=0;i<c;i++) {
            if (  v[i].first == s && chuaxet[v[i].second ] == 1  ) {
                q.push(v[i].second);
                chuaxet[ v[i].second ] = 0;
            }
            // if (v[i].second == s && chuaxet[ v[i].first] == 1 ) {
            //     q.push(v[i].first);
            //     chuaxet[ v[i].first] = 0;
            // }
        }
    }
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> c;
        int u;
        cin >> u;
        for (int i=0;i<c;i++) {
            int x,y;
            cin >> x >> y;
            v.push_back( pair<int,int>(x,y) ); 
        }
        BFS(u);
        v.clear();
        cout<<endl;
    }
}