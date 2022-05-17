#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,x;
    cin >> t;
    stack<int> st;
    while (t--) {
        string s;
        cin >> s;
        if ( s == "PUSH") {
            cin >> x;
            st.push(x);
        }
        if (s== "PRINT") if (st.size() != 0) cout<<st.top()<<endl; else cout<<"NONE"<<endl;
        if (s=="POP" && st.size()!=0  ) st.pop();
    }
}