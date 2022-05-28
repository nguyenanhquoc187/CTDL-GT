#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    long long a[51];
    a[1] = 1; a[2] = 2; a[3] =4; 
    while (t--) { 
        int n;
        cin >> n;
        if ( n<=3 ) cout<<a[n]; else {
            for (int i=4;i<=n;i++) {
                a[i] = a[i-1] + a[i-2] + a[i-3];
            }
            cout<<a[n];
        } 
        cout<<endl;
    }
}