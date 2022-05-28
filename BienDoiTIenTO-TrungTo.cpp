#include<bits/stdc++.h>
using namespace std;
int main () {
	int t; cin >> t; while(t--) {
		string s ; cin >> s;
		stack<string> as;
		for (int i = s.size() - 1 ; i >= 0 ; i--) {
			if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%'|| s[i] == '^') {
				string top = as.top(); as.pop();
				string top1 = as.top(); as.pop();
				string tmp = "(" + top + s[i] + top1 + ")";
				as.push(tmp);
			}
			else{
				string x;
				x+=s[i];
				as.push(x);
			}
		}
		
		cout << as.top() << endl;
	}
}

