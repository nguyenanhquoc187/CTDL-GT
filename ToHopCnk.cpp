#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
long long mod = 1e9+7;
long long C(int n, int k) {
    long long Cn[n+5][k+5] ={0};
    for (int i=1;i<=n;i++) Cn[i][0] = 1;
    Cn[1][1] = 1;
    for (int i=2;i<=n;i++) {
        for (int j=1;j<=min(i,k);j++) {
            Cn[i][j] = (Cn[i-1][j-1] + Cn[i-1][j]) % mod  ;
        }
    }
    return Cn[n][k];
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        cout << C(n,k) <<endl;  
    }
}