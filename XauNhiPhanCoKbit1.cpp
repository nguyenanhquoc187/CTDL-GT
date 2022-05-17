#include <bits/stdc++.h>
using namespace std;
int a[30],n,k, dem = 0, b[30];
bool check() {
    int count = 0;
    for (int i=0;i<n;i++) if ( a[i]) count++;
    if (count == k) return 1; 
    return 0;
}
void in() {
    if (check()) {
        for (int i=0;i<n;i++) cout<<a[i];
        cout<<endl;
    } 
}
void sinh(int i) {
    for (int j=0;j<=1;j++) {
        a[i] = j;
        if (i == n - 1) in(); else sinh(i+1);
    }
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        sinh(0);
    }
}