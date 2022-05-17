#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int n, s, m ;
        cin >> n >> s >> m;
        if ( n < m || 6*n - m*7 < 0 ) cout<<-1; 
        else {
            int x = ( m*s / n ) ;
            if (x*n != m*s) cout<<x+1; else cout<<x;
        }
        cout<<endl;
    }
}