#include <bits/stdc++.h>
using namespace std;
int n,x, a[25] , b[25], dem =0;
void in(int j) {
    cout <<"{";
    for (int i = 0 ; i < j ;i++) cout << b[i] << " ";
    cout << b[j]<<"}" << " ";
}
void Try1(int i , int s, int k) {
    for (int j = k ; j < n ; j++) {
        b[i] = a[j];
        s+= a[j];
        if (s == x) dem++; else 
        if (s < x ) Try1(i+1,s, j);
        s-=a[j];
    }
}
void Try2(int i , int s, int k) {
    for (int j = k ; j < n ; j++) {
        b[i] = a[j];
        s+= a[j];
        if (s == x) in(i); else 
        if (s < x ) Try2(i+1,s, j);
        s-=a[j];
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        dem = 0;
        cin >> n >> x;
        for (int i =0 ; i< n ;i++) cin >> a[i];
        Try1(0,0,0);
        if (dem == 0) cout<<-1; else {
            cout <<dem << " ";
            Try2(0,0,0);
        }
        cout <<endl;
    }
}