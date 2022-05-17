#include<bits/stdc++.h>
using namespace std;
int main () {
	int t; cin >> t; while(t--) {
		string s ; 
		cin >> s;
		stack<string> st;
		for (int i = 0 ; i < s.size() ; i++) {
			if ( s[i] >='0' && s[i] <='9' ) {
				st.push( string(1,s[i]) );
			} else {
				long long ans = 0;
				string x = st.top(); st.pop();
				string y = st.top(); st.pop();
//				string tmp = "(" +  y + s[i] + x  +  ")" ;
				if ( s[i] == '+' ) ans = stol(y) + stol(x); 
				if ( s[i] == '-' ) ans = stol(y) - stol(x); 
				if ( s[i] == '*' ) ans = stol(y) * stol(x); 
				if ( s[i] == '/' ) ans = stol(y) / stol(x); 
				string tmp ="";
				if ( ans < 0) {
					ans*= -1;
					tmp = tmp +  "-" + to_string(ans);
				} else tmp = to_string(ans);
				st.push(tmp);
			}
		}
		cout << st.top() << endl;
	}
}

