#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
string To_binary(int n) {
    string s="";
    while (n > 0) {
        if (n%2 == 0) {
            s += '0';
        } else s+='1';
        n/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int n;
        cin >> n; 
        for (int i=1;i<=n;i++) cout<<To_binary(i) << " ";
        cout<<endl;
    }
}