#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int m,n;
        cin >> m >> n;
        int a[m+5],b[n+5], c[n+m+5] ={0} ;
        for (int i = 0 ; i < m ; i++) cin >> a[i];
        for (int i = 0 ; i < n ; i++) cin >> b[i];
        for (int i = 0 ; i < m ; i++) {
            for (int j = 0 ; j < n ; j++) {
                c[i+j] = c[i+j] + a[i]*b[j];
            }
        }
        for (int i = 0 ; i < n+m - 1; i++) cout << c[i] << " ";
        cout << endl;
    }
}