#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
long long mod = 1e9+7;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        long long s=0;
        for (int i=0;i<n;i++) {
            s = s + a[i]*i;
            s= s%mod;
        }
        cout<<s<<endl;
    }
}