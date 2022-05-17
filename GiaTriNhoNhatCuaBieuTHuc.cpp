#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int n;
        cin >> n;
        int a[n+5], b[n+5];
        for (int i =0 ; i< n ;i++) cin >> a[i];
        for (int i =0 ; i< n ;i++) cin >> b[i];
        sort(a,a+n);
        sort(b,b+n,greater<long long>());
        long long s = 0;
        for (int i = 0 ; i < n ; i++) s+=a[i]*b[i];
        cout << s << endl;
    }
}