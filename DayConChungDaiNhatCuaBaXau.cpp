#include <bits/stdc++.h>
using namespace std;
        int n,m,h;
int xauChung(string x, string y, string z) {
    int f[n+2][m+2][h+2]  = {} ;
    for (int i=0;i < x.size() ;i++) {
        for (int j=0 ; j < y.size() ; j++) {
            for (int k = 0; k < z.size(); k++) {
                if ( x[i] == y[j] && y[j] == z[k]) {
                    f[i+1][j+1][k+1] = f[i][j][k] + 1;
                } 
                else f[i+1][j+1][k+1] = max(  f[i][j+1][k+1], max(f[i+1][j+1][k], f[i+1][j][k+1])   );
            }
        }
    }
    return f[x.size()][y.size()][z.size()];
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        cin >> n  >> m >> h;
        string x,y,z;
        cin >> x >> y >> z;
        cout << xauChung(x,y,z) << endl;
    }
}