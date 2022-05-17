#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int n;
        cin >> n;
        int a[n+5], b[n+5] = {0};
        for (int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        int r = n-1, dem = n;
        for (int i=n/2-1;i>=0;i--) {
            if (a[i]* 2 <= a[r] ) {
                dem--;
                r--;
            }
        }
        cout<<dem<<endl;
    }
}