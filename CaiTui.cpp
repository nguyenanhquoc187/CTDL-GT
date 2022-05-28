#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,v;
        cin >> n >> v;
        int w[n],c[n] , a[n][n];
        for (int i=0;i<n;i++) cin >> w[i];
        for (int i=0;i<n;i++) cin >> c[i];  
        for (int i=0;i<n;i++) a[0][i] = a[i][0] = 0;
        for (int i=1;i<n;i++) {
            for (int j=1;j<=v;j++) {
                if ( j >= w[i]   ) a[i][j] = max(a[i-1][ j-w[i] ] + c[i],a[i-1][j]);
                else a[i][j] = a[i-1][j];
                
            }
        }
        cout<<a[n-1][v]<<endl;
    }
}