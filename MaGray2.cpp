#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main () {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s,s2;
        cin >> s;
        s2+=s[0];
        for (int i=1;i<s.size();i++) {
            if (s[i] == '1') {
                if (s2[i-1] == '0') s2+='1'; else  s2+='0';
            } else {
                s2+=s2[i-1];
            }
        } 
        cout<<s2;
        cout<<endl;
    }
}