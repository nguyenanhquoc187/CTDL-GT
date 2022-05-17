#include <bits/stdc++.h>
using namespace std;
struct data {
    int si,fi;
};
bool cmp(data a, data b ) { return a.fi < b.fi ;}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int n;
        cin >> n;
        data a[n+5];
        for (int i=0;i<n;i++) cin >> a[i].si;
        for (int i=0;i<n;i++) cin >> a[i].fi;
        sort(a,a+n,cmp);
        int dem = 1, k = a[0].fi;
        for (int i=1;i < n; i++) {
            if ( a[i].si >= k ) {
                dem++;
                k = a[i].fi;
            }
        }
        cout<<dem << endl;
    }
}