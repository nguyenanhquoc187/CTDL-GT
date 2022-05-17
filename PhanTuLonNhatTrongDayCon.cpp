#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        long long a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        int j=0;
        while (j+k<=n) {
            cout<< *max_element(a+j,a+j+k)<<" ";
            j++;
        }
        cout<<endl;
    }
}