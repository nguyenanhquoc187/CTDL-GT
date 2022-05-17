#include<bits/stdc++.h>
using namespace std;
int chuaxet[10000],  n , truoc[10000] ,c;
vector<pair<int,int> > v;
void BFS(int u) {
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
                truoc[v[i].second] = s;
            }
        }
    }
}
void duong_di(int s, int t) {
    vector<int> vt;
    BFS(s);
    if (truoc[t] == 0) cout<<"-1";
    else {
        vt.push_back(t);
        int u = truoc[t];
        while ( u != s) {
            vt.push_back(u);
            u = truoc[u];
        }
        vt.push_back(s);
    }
    for (int i = vt.size() - 1; i >=0; i--) cout<<vt[i] <<" ";
    cout<<endl;
}
int main () {
    int k;
    cin >> k;
    while (k--) {
        int s,t;
        cin >> n >> c >> s >> t;
        for (int i=0;i<c;i++) {
            int x,y;
            cin >> x >> y;
            v.push_back( pair<int,int>(x,y) ); 
        }
        duong_di(s,t);
        v.clear();
    }
}