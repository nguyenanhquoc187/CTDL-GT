#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin >> n >> x;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        int dem = count(a,a+n,x);
        if (!dem) cout<<-1; else cout<<dem;
        cout<<endl;
    }
}