#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    cin.ignore();
    while (t--) { 
        string s;
        getline(cin,s);
        stack<int> st;
        int check = 0;
        for (int i= 0 ; i < s.size() ; i++) {
            if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*'  || s[i] == '/') st.push(s[i]);
            else if (s[i] == ')' ) {
                if ( st.top() == '(') {
                    check = 1;
                    break;
                }
                while ( !st.empty() && st.top() != '(' ) st.pop();
                st.pop();
            }
        }
        if (check) cout << "YES"; else cout <<"NO";
        cout << endl;
    }
}