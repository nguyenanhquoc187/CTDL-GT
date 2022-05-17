#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        string s;
        cin >> s;
        int n = s.size();
        int f[n+5][n+5];
        for (int i = 0 ;i < n ; i++) f[i][i] = 1;
        for (int i = n - 2; i >= 0 ;i--) {
            for (int j = i+1 ; j< n ; j++) {
                if (s[i] == s[j])  {
                    if (f[i+1][j-1] == 1 || j-i == 1) f[i][j] = 1; else f[i][j] = 0;
                } else f[i][j] = 0; 
            }
        }
        int ans = 0;
        for (int i = 0 ; i< n ; i++) {
            for (int j = 0 ; j < n; j++) {
                if (f[i][j] == 1) ans = max(ans,j-i+1);
            }
        }
        cout << ans << endl;
    }
}