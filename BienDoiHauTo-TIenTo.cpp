#include<bits/stdc++.h>
using namespace std;
int main () {
	int t; cin >> t; while(t--) {
		string s ; 
		cin >> s;
		stack<string> st;
		for (int i = 0 ; i < s.size() ; i++) {
			if ( s[i] >='A' && s[i] <='Z' ) {
				st.push( string(1,s[i]) );
			} else {
				string x = st.top(); st.pop();
				string y = st.top(); st.pop();
				string tmp = s[i] + y + x ;
				st.push(tmp);
			}
		}
		cout << st.top() << endl;
	}
}

