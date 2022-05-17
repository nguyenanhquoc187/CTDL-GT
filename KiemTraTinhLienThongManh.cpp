#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int chuaxet[1005], ok=0;
void dfs(int j)
{
    chuaxet[j] = 0; 
    for (int i = 0; i < v[j].size(); i++) if (chuaxet[v[j][i]] ) dfs(v[j][i]);
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
            int x,y;
            cin >> x >> y;
            v[x].push_back(y);
        }
        int dem = 0;
        for (int i=1;i<=n;i++) chuaxet[i] = 1;
        for (int i = 1; i <= n; i++)
        {
            if (chuaxet[i] ==  1)
            {   
                dem++;
                dfs(i);
            }
        }
        if (dem == 1) cout<<"YES"; else cout<<"NO";
        cout<<endl;
        for (int i=1;i<=n;i++) v[i].clear();
    }
}