#include <bits/stdc++.h>
#define endl "\n"
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
int check(int a[], int b[], int n, int k) {
    int dem = 0,s =0;
    for (int i=0;i<n;i++) if (a[i]) {
        dem++;
        if (dem > k ) return 0;
        s+= b[i] ;
    }
    if (dem == k) return s; return 0;
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    while (1) {
        int n,k,s;
        cin >> n >> k >> s;
        if (!n && !k && !s) break;
        int a[n]={0},b[n];
        for (int i=0;i<n;i++) b[i] = i+1;
        int x = check(a,b,n,k) , dem =0;
        if ( x != 0 && x == s) dem++;
        while (next_binary(a,n) ) {
            x = check(a,b,n,k) ;
            if ( x != 0 && x == s) dem++;
        } 
        cout<<dem;
        cout<<endl;
    }
}