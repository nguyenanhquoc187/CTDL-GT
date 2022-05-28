#include<bits/stdc++.h>
using namespace std;
int deg(char c) {
	if (c == '#' ) return 0;
	if (c == '^' ) return 3;
	if ( c == '*' || c == '/' || c == '%') return 2;
	if ( c== '+' || c == '-' ) return 1;
	return 0;
}
bool check(char c) {
	if ( c == '^' || c == '+' || c == '-' || c == '*' || c == '/') return 1; return 0;
}
int main () {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		stack<char> st;
		st.push('#');
		for (int i = 0 ;i < s.size() ;i++) {
			if ( ( s[i] >= 'A' && s[i] <= 'Z' )	|| (s[i] >= 'a' && s[i] <= 'z' ) ) {
				cout << s[i];
			}
			else if (s[i] == '(' ) {
				st.push(s[i]);
			}
			else if (s[i] == ')' ) {
				while (st.top() != '(' ) {
					cout << st.top();
					st.pop();
				}
				st.pop();
			}  
			else if ( check(s[i]) ) {
				if ( st.empty() ==0  ) {
					while ( deg(s[i])  <= deg(st.top()) ) {
						cout << st.top() ; st.pop();
					}
				} 
				st.push(s[i]);
			}
		}
		while ( st.top() != '#' ) {
			cout << st.top(); st.pop();
		}
		cout << endl;
	}
}