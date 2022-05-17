#include <bits/stdc++.h>
using namespace std;
    int n, a[40] , dem = 1e9;
void doiTien(int j, int s, int k) {
    for (int i=k+1; i < n; i++) {
        s-= a[i];
        if ( s == 0 )  dem = min(dem,j);
        else if (s > 0 && j < dem ) doiTien(j+1,s, i);
        s+=a[i];
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int s;
    cin >> n >> s;
    for (int i=0;i<n;i++) cin >> a[i];
    doiTien(1, s, -1);
    if (dem == 1e9) cout << -1; else cout << dem;
    cout <<endl;
}