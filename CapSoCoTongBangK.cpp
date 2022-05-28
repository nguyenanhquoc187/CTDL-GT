#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long n,k,count = 0;
        cin >> n >> k;
        long a[n];
        map<long long,long long> m;
        for (long long i=0;i<n;i++) {
            cin >> a[i];
            m[a[i]]++;
        }
        for (map<long long,long long>::iterator it = m.begin();it!=m.end();it++) {
            if (it->first * 2==k) count = count + it->second* (it->second - 1);
            else count += it->second* m[ k - it->first];
        }
        count/=2;
        cout<<count <<endl;
    }
}