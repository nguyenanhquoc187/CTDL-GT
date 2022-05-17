#include <bits/stdc++.h>
using namespace std;
bool next_binary(int a[], int n) {
    int index = -1;
    for (int i=n-1;i>=0;i--) {
        if (!a[i]) {
            index = i;
            break;
        }
    }
    if (index == -1) return 0;
    for (int i=index ; i<n;i++) a[i] = 1 - a[i];
    return 1;
}
bool check(int a[],int n) {
    if (a[0] == 0 || a[n-1] == 1) return 0;
    for (int i=0;i<n-3;i++) if (a[i] == 0 && a[i] == a[i+1] && a[i+1] == a[i+2]  && a[i+2] == a[i+3] ) return 0;
    for (int i=0;i<n-1;i++) if (a[i] == 1 && a[i] == a[i+1] ) return 0;
    return 1;

}
int main () {
    int n;
    cin >> n;
    int a[n+1];
    fill_n(a,n,0);
    while (next_binary(a,n) ) {
        if (check(a,n) ) {
            for (int i=0;i<n;i++) if (!a[i] ) cout<<6; else cout<<8;
            cout<<endl;
        }
    }
}