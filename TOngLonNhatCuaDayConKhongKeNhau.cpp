#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int n;
        cin >> n;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        long long f[n+5] = {0};
        f[0] = a[0], f[1] = a[1]; f[-1] = 0;
        long long Max = 0;
        for (int i=2;i<n;i++) {
            f[i] = max(f[i-2] + a[i], f[i-3] + a[i]);
            Max = max(Max,f[i]);
        }
        cout<<Max<<endl;
    }
}