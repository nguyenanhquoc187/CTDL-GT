#include <bits/stdc++.h>
using namespace std;
int a[30],n,k, dem = 0, b[30];
bool check() {
    if (a[0] != 1 || a[n-1] != 0) return 0;
    for (int i=0;i<n;i++) {
        if (a[i] == a[i+1] && a[i] == 1) return 0;
    }
    return 1;
}
void in() {
    if (check()) {
        for (int i=0;i<n;i++) if (a[i]) cout<<"H"; else cout<<"A";
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
        cin >> n ;
        sinh(0);
    }
}