#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
long long mod = 1e9+7;
vector<int> f(10),d(10);
int a[101];
void Try(int k,int n) {
    for (int i = 1; i <= 9 ; i++) {
        d[i] = 0;
        for (int j = 1; j<=i ; j++) d[i] =  (d[i] + f[j] ) % mod;
    }
    int res = 0;
    for (int i = 1 ; i<= 9 ; i++) res = (res + d[i]) % mod;
    a[k] = res;
    if ( k < n) {
        f = d;
        Try(k+1,n);
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int n, dem = 0;
        cin >> n;
        for (int i = 0 ; i <=9 ;i++) f[i] = 1;
        int ans = 0;
        a[1] = 10;
        Try(2,n);
        for (int i = 1; i <= n ; i++) ans = (ans + a[i]) % mod;
        cout << ans << endl;
    }
}