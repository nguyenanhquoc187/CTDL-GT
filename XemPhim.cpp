#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,c ;
    cin >> c >> n;
    int a[n+5], f[n+5][c+5];
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<n;i++) {
        for (int j=1;j<=c;j++) {
            if (i > 0) {
                if ( j>= a[i] ) f[i][j] = max( f[i-1][ j-a[i] ] + a[i], f[i-1][j] ) ;
                else f[i][j] = f[i-1][j];   
            } else if (a[i] <= j ) f[i][j] = a[i];
        }
    }
    cout << f[n-1][c];
}   