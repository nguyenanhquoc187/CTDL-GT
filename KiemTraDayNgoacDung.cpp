#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        string s;
        cin >> s;
        stack<char> st;
        int check = 1;
        for (int i=0;i < s.size()   ;i++) {
            if ( s[i] == '(' || s[i] == '[' || s[i] == '{' ) st.push(s[i]);
            else {
                if (st.empty()) {
                    check = 0; break;
                }
                if ( s[i] == ')'  ){
                    if ( st.top() == '(' ) st.pop(); else check  =0;
                }
                if ( s[i] == ']' ) {
                    if ( st.top() == '[' ) st.pop(); else check  =0;
                }
                if ( s[i] == '}' ){
                    if ( st.top() == '{' ) st.pop(); else check  =0;
                }
                if (check == 0 ) break;
            }
        }
        
        if (check) cout <<"YES"; else cout <<"NO";
        cout <<endl;
    }
}