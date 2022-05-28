#include <bits/stdc++.h>
using namespace std;
int n, a[16], b[17];
vector < vector<int> > m;
void nhap(int j) {
    vector<int> x;
    for (int i =0 ; i<=j;i++) x.push_back(b[i]);
    m.push_back(x);
}
int songuyento(int n) {
    if (n==0 || n==1) return 0;
    for (int i=2;i<=sqrt(n);i++) {
        if (n%i == 0) return 0;
    }
    return 1;
}
void Try(int i, int k, int s) {
    for (int j = k ; j < n ; j++) {
        b[i] = a[j];
        s+=a[j];
        if (songuyento(s)) nhap(i); 
        if ( i < n - 1) Try(i+1,j+1, s);
        s-=a[j];
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        cin >> n;
        for (int i =0 ; i< n ;i++) cin >> a[i];
        sort(a,a+n,greater<int>());
        Try(0,0,0);
        sort(m.begin(),m.end());
        for (int i = 0 ; i< m.size() ; i++) {
            for (int j = 0 ; j < m[i].size() ; j++) cout << m[i][j] << " ";
            cout <<endl;
        }
        m.clear();
    }
}