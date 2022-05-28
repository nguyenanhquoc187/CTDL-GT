#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    string s;
    cin.ignore();
    while (t--) {
        getline(cin,s);
        stack<string> st;
        s = s + " ";
        int found = s.find(' ');
        while ( found != string::npos) {
            st.push( s.substr(0, found ) );
            s.erase(0, found +1) ;
            found = s.find(' ');
        }
        while (!st.empty()) {
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
}