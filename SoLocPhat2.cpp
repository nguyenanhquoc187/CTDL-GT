#include <bits/stdc++.h>
using namespace std;
int dem ;
void in(set<long long> &s,int a[], int n) {
    long long x=0;
    for (int i=0;i<n;i++) x= x*10 + a[i];
    s.insert(x);
    dem++;
}
void locphat(int i, int a[], int n, set<long long > &s) {
    for (int j = 8 ; j>=6;j-=2) {
        a[i] = j;
        if (i == n -1) in(s,a,n); else  locphat(i+1,a,n,s);
    }
    
}
int main () {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        dem = 0;
        set<long long > s;
        int n;
        cin >> n;
        int a[n];
        for (int i=1;i<=n;i++) locphat(0,a,i,s);
        cout<<dem<<endl;
        for(set<long long>::iterator it = s.begin(); it!=s.end();it++) cout<<*it<<" ";
        cout<<endl;
    }
}