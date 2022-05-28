#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int n;  
        cin >> n;
        int f[n+5];
        f[1] = 0;  f[2] = 1; f[3] = 1;
        for (int i = 4; i<= n ; i++) {
            f[i] = f[i-1] +1;
            if (i % 2 == 0) {
                f[i]= min(f[i/2] + 1,f[i]) ;
            }
            if (i % 3 == 0 ) f[i] = min(f[i/3] + 1,f[i]) ;
        }
        cout << f[n] <<endl;
    }
}