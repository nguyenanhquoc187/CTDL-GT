#include <bits/stdc++.h>
using namespace std;
int n, k , a[16], b[16];
vector< vector<int> > v;
void nhap() {
    vector<int> x;
    for (int i = 0 ; i< k ;i++) x.push_back(b[i]);
    v.push_back(x);
}
void Try(int i ,int index) {
    for (int j =index ; j < n; j++) {
        b[i] = a[j];
        if (i == k - 1) nhap();
        else if ( i < k - 1) Try(i+1,j+1); 
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        cin >> n >> k;
        for (int i =0 ;i < n; i++) cin >> a[i];
        sort(a,a+n);
        Try(0,0);
        sort(v.begin(),v.end() );
        for (int i = 0 ;i < v.size() ; i++) {
            for (int j = 0 ; j< k ;j++) cout << v[i][j] << " ";
            cout <<endl;
        }
        v.clear();
    }
}