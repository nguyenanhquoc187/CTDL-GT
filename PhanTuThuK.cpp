#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k;
        cin >> n >> m >> k;
        int a[n],b[m];
        for (int i=0;i<n;i++) cin >> a[i];
        for (int i=0;i<m;i++) cin >> b[i];
        int j=0,c[n+m+1], i1=0,i2=0,x; 
        while (j!= n + m - 1) {
            if (a[i1] < b[i2] ) {
                x = a[i1];
                i1++;
            } else {
                x= b[i2];
                i2++;
            }
            j++;
            if (k == j) cout<<x;
        }
        cout<<endl;
    }
}