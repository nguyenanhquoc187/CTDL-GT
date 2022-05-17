#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int n, m ;
        cin >> n >> m ;
        long long f[n+4][m+5];
        for (int i =1 ; i <= n ; i++) f[i][0] = 1;
        for (int j =1  ; j <= m; j++) f[0][j] = 1;
        for (int i = 1; i <= n ;i++)  {
            for (int j = 1; j <= m ; j++) {
                f[i][j] = f[i-1][j] + f[i][j-1];
            }
        }
        cout << f[n][m] << endl;
    }
}