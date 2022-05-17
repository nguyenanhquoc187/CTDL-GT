#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int n,k;
        cin >> n >> k;
        int a[n+5] = {0};
        a[0] = 1; a[1] = 1;
        for (int i=2;i <= n ;i++) {
            for (int j=1;j<=min(k,i) ;j++) {
                a[i] += a[i - j];
                a[i]%=mod;
            }
        }
        cout << a[n] <<endl;
    }
}