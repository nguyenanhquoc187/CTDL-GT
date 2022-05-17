#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
bool check(vector<int> v, int n) {
    int j = n/2;
    for (int i=0;i<j;i++) {
        if (v[i] > v[j] && n%2 == 1 ) swap(v[i],v[n-i-1]); 
        else if (v[i] > v[n-i-1] && n%2 == 0) swap(v[i],v[n-i-1]);
    } 
    for (int i=0;i<n-1;i++) if (v[i] > v[i+1]) return 0; return 1;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t; 
    while (t--) { 
        int n;
        cin >> n; 
        vector<int> v(n+5);
        for (int i=0;i<n;i++) cin >> v[i];
        if ( check(v,n) ) cout<<"Yes"; else cout<<"No";
        cout<<endl;
    }
}