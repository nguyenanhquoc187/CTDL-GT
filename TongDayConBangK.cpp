#include <bits/stdc++.h>
using namespace std;
int a[30],n,k, dem = 0, b[30];
bool check() {
    int tong = 0;
    for (int i=0;i<n;i++) tong = tong + a[i]*b[i];
    if (tong == k) return 1; 
    return 0;
}
void in() {
    if (check()) {
        for (int i=0;i<n;i++) if (a[i]) cout<<b[i]<<" ";
        dem++;
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
    cin >> n >> k;
    for (int i=0;i<n;i++) cin >> b[i];
    sinh(0);
    cout<<dem;
}