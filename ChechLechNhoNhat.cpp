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
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        int min = 1e9;
        for (int i=0;i<n-1;i++) {
            if (a[i+1] - a[i] < min) min = a[i+1] - a[i];
        }
        cout<<min;
        cout<<endl;
    }
}