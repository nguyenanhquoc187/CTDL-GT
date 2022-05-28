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
        int j = 1 , a[s.size() +5];
        for (int i =0 ; i < s.size() ; i++) {
            if ( s[i] == '(') {
                a[i] = j; j++;
                st.push(i);
            } 
            if (s[i] ==  ')' ) {
                a[i] = a[ st.top() ];
                st.pop();
            }
        }
        for (int i =0 ; i < s.size() ; i++) {
            if (s[i] == '(' || s[i] == ')') cout << a[i] << " ";
        } 
        cout <<endl;
    }
}