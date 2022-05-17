#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int chuaxet[1005], ok=0;
void dfs(int j, int p)
{
    chuaxet[j] = 0;
    for (int i = 0; i < v[j].size(); i++)
    {
        if (chuaxet[v[j][i]] )
        {
            dfs(v[j][i], j);
        }
        else if (v[j][i] != p) ok = 1;
    }
}
int main()
{
    int x, n, m;
    cin >> x;
    while (x--)
    {
        cin >> n >> m;
        for (int i = 1; i <= m; i++)
        {
            int k, h;
            cin >> k >> h;
            v[k].push_back(h);
            v[h].push_back(k);
        }
        ok = 0;
        for (int i=1;i<=n;i++) chuaxet[i] = 1;
        for (int i = 1; i <= n; i++)
        {
            if (chuaxet[i] )
            {   
                dfs(i, 0);
                if (ok == 1)
                {
                    cout << "YES\n";
                    break;
                }
            }
        }

        if (ok == 0)
            cout << "NO\n";
        for (int i=1;i<=n;i++) v[i].clear();
    }
    return 0;
}