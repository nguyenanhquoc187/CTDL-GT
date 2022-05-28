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
        int Max = 0,s =0;
        for (int i=0;i<n;i++) {
            s = max(a[i], s + a[i]);
            Max = max(s,Max);
        }
        cout<<Max<<endl;
    }
}