#include <bits/stdc++.h>
using namespace std;
int a[501][505];
int check(int n , int m, int k) {
    for (int i = n; i >= n - k; i--) if (a[i][m] == 0 ) return 0;
    for (int i = m; i >= m - k; i--) if (a[n][i] == 0 ) return 0;
    return 1;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int n,m, ans = 0;
        cin >> n >> m;
        int  f[n+5][m+5];
        memset(f,0,sizeof(f));
        for (int i = 1; i <=n;i++) 
            for (int j = 1; j<=m;j++)  {
                cin >> a[i][j];
                if (a[i][j] ) f[i][j] = 1; else f[i][j] = 0;
            }
        for (int i = 1; i<=n; i++) {
            for (int j = 1; j <= m ; j++) {
                if ( a[i][j] == 1 && f[i-1][j-1] != 0) {
                    if ( check(i,j,f[i-1][j-1] ) ) f[i][j] = f[i-1][j-1] + 1;
                }
                ans = max(ans,f[i][j]);
            }
        }
        cout << ans << endl;
    }
}