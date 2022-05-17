#include <bits/stdc++.h>
using namespace std;
struct data {
    int job,dl, profit;
};
bool cmp(data a, data b ) { return a.profit > b.profit ;}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int n;
        cin >> n;
        data a[n+5];
        for (int i=0;i<n;i++) cin >> a[i].job >> a[i].dl >> a[i].profit;
        sort(a,a+n,cmp);
        int dem = 1, ans = a[0].profit , c[1005] = {0};
        c[a[0].dl ] = 1;
        for (int i=1;i < n; i++) {
            for (int j = a[i].dl; j >=1 ; j--) 
                if (c[j] == 0 ) {
                    c[j] = 1;
                    ans+=a[i].profit;
                    dem++;
                    break;
                } 
        }
        cout<<dem << " " << ans << endl;
    }
}