#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        string s;
        cin >> s;
        int count = 0;
        stack<char> st;
        if ( s[0] == ')' ) count++, s[0] = '(';
        if ( s[s.size() - 1] == '(' ) s[s.size() - 1] = ')', count++;
        for (int i=0;i< s.size() ; i++ ) {
            if ( s[i] == '(' ) st.push(s[i]);
            else {
                if ( !st.empty() && st.top() == '(' ) st.pop();
                else if ( st.empty() ) {
                    count++;
                    st.push('(');
                }
            }
        }
        if ( !st.empty() ) count = count + st.size() /2;
        cout << count << endl;
    }
}