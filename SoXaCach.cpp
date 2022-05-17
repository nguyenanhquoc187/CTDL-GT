#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
bool check(int a[], int n) {
    for (int i=1;i<n;i++) if (a[i] - a[i-1] == 1 || a[i-1] - a[i] == 1) return 0; return 1;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        int a[n+1];
        for (int i=0;i<n;i++) a[i]=i+1;
        while (next_permutation(a,a+n) ) {
            if (check(a,n) ) {
                for (int i=0;i<n;i++) cout<<a[i];
                cout<<endl;
            }
        }
    }
}