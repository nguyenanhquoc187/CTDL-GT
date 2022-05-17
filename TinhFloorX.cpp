#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin >> n >> x;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        int *k = upper_bound(a,a+n,x);
        if (k == a) cout<<-1; else cout<<(k -a );
        cout<<endl;
    }
}