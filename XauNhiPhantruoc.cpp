#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool check = 0;
        for (int i=0; i< s.size() ;i++) if (s[i] == '1') {
            check = 1;
            break ;
        }
        if ( check ) {
            int index = -1;
            for (int i=s.size() - 1 ; i >=0 ;i--) {
                if ( s[i] == '1' ) {
                    index = i;
                    break;
                }
            }
            for (int i=index ; i<s.size(); i++) if (s[i] == '0') s[i] = '1' ; else s[i] = '0';
            for (int i=0; i < s.size() ; i++ ) cout<<s[i];
        } else {
            for (int i=0;i<s.size();i++) cout<<'1';
        }
        cout<<endl;
    }
}