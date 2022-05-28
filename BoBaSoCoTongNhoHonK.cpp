#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long n,k,dem = 0;
        cin >> n >> k;
        long long a[n];
        for (int i=0;i<n;i++ ) cin >> a[i];
        sort(a,a+n);
        for (int i=0;i<n-1;i++) {
            for (int j=i+1;j<n;j++) {
                if (a[i] + a[j] >= k) break;
                long long x = k - a[i] - a[j];
                int y =  lower_bound(a+j+1,a+n,x) - a ;
                dem+=(y-j-1);
            }
        }
        cout<<dem<<endl;
    }
}