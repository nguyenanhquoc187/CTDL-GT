#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    stack<int> st;
    while ( cin >> s ) {
        int x;
        if (s ==  "push" ) {
            cin >> x ;
            st.push(x);
        } 
        if ( s == "pop") st.pop();
        if ( s == "show" ) {
            if ( st.empty() ) cout<<"empty"<<endl; else {
                stack<int> a(st);
                int b[1000],j=0;
                while (!a.empty() ) {
                    b[j] = a.top();
                    a.pop();
                    j++;
                }
                for (int i=j-1;i>=0;i--) cout<<b[i]<<" ";
                cout<<endl;
            }
        }
    }
}