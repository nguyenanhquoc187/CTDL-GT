#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while ( t-- ) {
        int n;
        cin >> n;
        int a[n+1];
        for (int i=1;i<=n;i++) {
            a[i-1] = i;
            cout<<a[i-1];
        }
        while ( next_permutation(a,a+n) ) {
            cout<<" ";
            for (int i=0;i<n;i++) cout<<a[i];
        }
        cout<<endl;
    }
}