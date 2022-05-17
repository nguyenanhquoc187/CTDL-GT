#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
long long mod = 1e9+7;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long f[1005][1005];
    for (int i = 1; i <=1000;i++) f[i][1] = i;
    for (int i = 1; i <= 1000 ;i++) {
        for (int j = 2; j <=1000 ; j++) {
            f[i][j] = ( f[i][j-1]*(i-j+1)  ) % mod;
        }
    }
    int t; cin >> t;
    while (t--) { 
        int n, k;
        cin >> n >> k;
        cout << f[n][k] << endl;
    }
}
/* 5 2 n(n-1) 
    5 3 n(n-1)(n-2)
    5 4 n(n-1)(n-2)(n - 3)
*/