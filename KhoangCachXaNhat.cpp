#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n],check =0;
        for (int i=0;i<n;i++) cin >> a[i] ;
        for (int i=n-1;i>=0;i--) {
            int j=0, k= i ;
            while ( j+ i < n)  {
                if ( a[j+i] > a[j] ) {
                    cout<< i ;
                    check = 1;
                    break;
                }
                j++;
            }
            if (check) break;
        }
        if (!check) cout<<-1;
        cout<<endl;
    }
}