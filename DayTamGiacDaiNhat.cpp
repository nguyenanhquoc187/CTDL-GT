#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int n ,ans = 0;
        cin >> n ;
        int a[n+5] , l[n+5], r[n+5];
        for (int i =0 ; i< n ;i++) cin >> a[i];
        l[0] = 1; r[n-1] = 1;
        for (int i = 1 ; i< n ; i++) {
           if (a[i] > a[i-1] ) l[i] = l[i-1] + 1;
           else l[i] = 1;
        }
        for (int i = n - 2 ; i>= 0 ; i--) {
            if ( a[i] > a[i+1]) r[i] = r[i+1] + 1;
            else r[i] = 1;
        }
        for (int i = 0 ; i< n ;i++) ans = max(ans, l[i] + r[i] - 1 );
        cout<< ans << endl;
    }
}