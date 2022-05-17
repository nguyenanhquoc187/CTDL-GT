#include <bits/stdc++.h>
using namespace std;
void in(int a[], int n) {
    for (int i=0;i<n;i++) cout<<a[i];
    cout<<" ";
}
void locphat(int i, int a[], int n) {
    for (int j = 8 ; j>=6;j-=2) {
        a[i] = j;
        if (i == n -1) in(a,n); else  locphat(i+1,a,n);
    }
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i=n;i>=1;i--) locphat(0,a,i);
        cout<<endl;
    }
}