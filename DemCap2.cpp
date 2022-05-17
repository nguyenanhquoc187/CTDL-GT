#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) { 
        long long n,k,dem = 0;
        cin >> n >> k;
        long long a[n];
        for (long long i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        for (long long i=0;i<n-1;i++) {
            long long x = k + a[i];
            long long y = lower_bound(a+i+1,a+n,x) - a;
            dem+=(y - i - 1);
        }
        cout<<dem<<endl;
    }
}