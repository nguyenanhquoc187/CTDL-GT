#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n,::greater<int>());
        int j=0, k=n-1;
        for (int i=0;i<n;i++) {
            if ( i% 2 == 0) {
                cout<<a[j]<<" ";
                j++;
            } else {
                cout<< a[k] <<" ";
                k--;
            }
        }
        cout<<endl;
    }
}