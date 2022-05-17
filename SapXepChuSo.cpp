#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        string s="";
        for (int i=0;i<n;i++) {
            s=s + to_string(a[i]);
        }
        set<char> set(s.begin(), s.end());
        for (auto i:set) cout<<i<<" ";
        cout<<endl;
    }
}