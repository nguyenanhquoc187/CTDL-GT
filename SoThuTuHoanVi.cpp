#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool check(int a[], int n, int b[]) {
    for (int i=0;i<n;i++) if(a[i]!= b[i]) return 0;
    return 1;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n],b[n], dem = 1;
        for (int i=0;i<n;i++) {
            cin >> a[i];
            b[i] = i+1;
        }
        while (!check(a,n,b) ) {
            dem++;
            next_permutation(b,b+n);
        }
        cout<<dem<<endl;
    }
}