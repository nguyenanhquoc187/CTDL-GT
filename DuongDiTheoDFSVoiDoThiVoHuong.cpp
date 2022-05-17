#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int chuaxet[1005],truoc[1005] , n;
void dfs(int u) {
    chuaxet[u] = 0;
    for (int i=0;i<v[u].size();i++) if (chuaxet[ v[u][i] ] ) {
        truoc[v[u][i] ] = u;
        dfs( v[u][i] );
    }
}
void duongdi(int s, int t) {
    for (int i=1;i<=n;i++) {
        chuaxet[i] = 1;
        truoc[i] = 0;
    }
    dfs(s);
    vector<int> a;
    if (truoc[t] == 0 ) cout<<-1; else {
        a.push_back(t);
        int x = truoc[t];
        while (x != s) {
            a.push_back(x);
            x = truoc[x];
        }
        a.push_back(s);
    }
    for (int i=a.size() - 1;i>=0;i--) cout<<a[i]<<" ";
}
int main()
{
    int x, m;
    cin >> x;
    while (x--)
    {   
        int s,t;
        cin >> n >> m >> s >> t;
        for (int i = 1; i <= m; i++)
        {
            int x,y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        duongdi(s,t);
        cout<<endl;
        for (int i=1;i<=n;i++) v[i].clear();
    }
}   