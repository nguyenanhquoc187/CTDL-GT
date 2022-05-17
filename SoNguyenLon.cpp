#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int XauChung(string s1, string s2) {
    int n = s1.size(), m = s2.size();
    vector< vector<int> > c(n+1, vector<int>(m+1,0));
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (s1[i] == s2[j] ) {
                c[i+1][j+1] = c[i][j] +1;
            } else {
                c[i+1][j+1] = max(c[i][j+1],c[i+1][j]);
            }
        }
    }
    return c[n][m];
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        string s1,s2;
        cin >> s1 >> s2;
        cout<<XauChung(s1,s2)<<endl;
    }
}