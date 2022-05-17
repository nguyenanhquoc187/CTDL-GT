#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        int *dem = upper_bound(a,a+n,0) ;
        if (dem == a+n ) cout<<n; else cout<<(dem - a);
        cout<<endl;
    }
}