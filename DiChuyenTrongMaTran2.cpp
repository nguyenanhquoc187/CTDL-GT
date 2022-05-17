#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int n , m;
        cin >> n >> m;
        int a[n+5][m+5], d[n+5][m+5] = {0};
        for (int i = 1; i <= n ;i++) for (int j = 1; j <= m ;j++) cin >> a[i][j];
        queue<pair<int,int> > q;
        q.push({1,1} );
        d[1][1] = 0;
        int check = 0;
        while (q.size() ) {
            pair<int,int> top = q.front();
            q.pop();
            int i = top.first, j = top.second;
            if ( i== n && j == m) {
                check = 1;break;
            }
            if ( i + a[i][j] <= n && !d[i+a[i][j]][j]) {
                q.push({i + a[i][j], j  }); 
                d[i+a[i][j]][j] = d[i][j] + 1;
            }
            if ( j + a[i][j] <= m && !d[i][j+ a[i][j] ] ) {
                q.push({i, j+ a[i][j]}); 
                d[i][j+ a[i][j] ] = d[i][j] + 1;
            }

        }
        if (check == 0) cout << -1; else
        cout << d[n][m]  ;
        cout << endl;
    }
}