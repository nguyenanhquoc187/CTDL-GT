#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int chuaxet[10000],  n , truoc[10000] ,c;
vector<pair<int,int> > v;
void BFS(int u, int t) {
    for (int i=1;i<=n;i++) {
        chuaxet[i] = 1;
        truoc[i] = 0;
    }
    queue<int> q;
    q.push(u);
    chuaxet[u] = 0;
    while (q.size()!=0) {
        int s = q.front();
        q.pop();
        for (int i=0;i<c;i++) {
            if (v[i].first == s && chuaxet[v[i].second] ){
                q.push(v[i].second);
                chuaxet[v[i].second] = 0;
            }
            if (v[i].second == s && chuaxet[v[i].first] ){
                q.push(v[i].first);
                chuaxet[v[i].first] = 0;
            }
            if (chuaxet[t] == 0) break;
        }
            if (chuaxet[t] == 0) break;

    }
}
void duong_di(int s, int t) {
        BFS(s,t);
    vector<int> vt;
    if (chuaxet[t] == 1) cout<<"NO";
    else cout<<"YES";
    cout<<endl;
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k;
    cin >> k;
    while (k--) {
        int s,t,q;
        cin >> n >> c ;
        for (int i=0;i<c;i++) {
            int x,y;
            cin >> x >> y;
            v.push_back( pair<int,int>(x,y) ); 
        }
        cin >> q;

        while (q--) {
            cin >> s >> t;
            duong_di(s,t);
        }
        v.clear();
    }
}