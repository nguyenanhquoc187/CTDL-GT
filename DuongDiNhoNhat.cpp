#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int n,m;
        cin>> n >> m;
        int a[n+5][m+5], f[n+5][m+5] = {0};
        for (int i = 1; i <= n; i++) for (int j = 1; j<=m ;j++) cin >> a[i][j];
        for (int i = 1; i<= n ; i++) {
            for (int j = 1; j <=m ;j++) {
                if (i == 1)  f[i][j] = f[i][j-1] ;
                else if (j == 1) f[i][j] = f[i-1][j] ;
                else f[i][j] = min( f[i][j-1] , min ( f[i-1][j], f[i-1][j-1] ) ) ;
                f[i][j]+=a[i][j];
            }
        }
        cout << f[n][m] <<endl;
    }
}