#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n+1][n+1];
    cin.ignore();
    for (int i=1;i<=n;i++) {
        string s;
        getline(cin,s);
        s+=' ';
        int k=0;
        for (int j=0;j<s.size();j++) {
            if (s[j] >= '0' && s[j] <='9' ) {
                k = k*10 + s[j] - '0';
            } else {
                if (k > i) cout<<i << " " <<k <<endl;
                k=0;
            }
        }
    }
}