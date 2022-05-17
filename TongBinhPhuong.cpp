#include <bits/stdc++.h>
using namespace std;
bool check(long long  n) {
    long long  x = sqrt(n);
    float y = (float) sqrt(n);
    if (x == y) return 1; return 0;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        long long n;
        cin >> n;
        long long  f[n+5];
        f[1] =1 ; f[2] = 2;  f[3] = 3;
        long long  m = sqrt(n);
        for (long long  i=4;i <= n ; i++ ) {
            if ( check (i) ) f[i] = 1; 
            else {
                long long  x = sqrt(i), y = i;
                f[i] = 1e9;
                while (x > 0) {
                    y = i;
                    y = y - pow(x,2);
                    long long  z = f[y] + 1;
                    f[i] = min(f[i],z);
                    x--;
                }
            }
        }
        cout << f[n];
        cout <<endl;
    }
}