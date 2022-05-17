#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n+5], dp[n+5] = {0} , ans = 0;
        for (int i=0;i<n;i++) cin >> a[i];
        dp[0] = 1;
        for (int i=1;i<n;i++) {
            dp[i] = 1;
            for (int j=0;j<i;j++) if (a[i] >= a[j] ) dp[i] = max(dp[i],dp[j] +1);
            ans = max(ans, dp[i]);
        }
        cout<<n - ans <<endl;
    }
}