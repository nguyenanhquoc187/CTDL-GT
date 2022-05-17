#include <bits/stdc++.h>
using namespace std;
void in(int n, int a[]) {
    for (int i=0;i<n;i++) {
        if (!a[i]) cout<<"A"; else cout<<"B";
    }
    cout<<" ";
}
void sinh(int i,int n, int a[]) {
    for (int j=0;j<=1;j++) {
        a[i] = j;
        if (i == n - 1) in(n,a); else sinh(i+1,n,a);
    }
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a[30],n;
        cin >> n;
        sinh(0,n,a);
        cout<<endl;
    }
}