#include<bits/stdc++.h>
using namespace std;
int main () {
	int t; cin >> t; while(t--) {
		string s ; cin >> s;
		stack<string> as;
		for (int i = s.size() - 1 ; i >= 0 ; i--) {
			if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' ) {
                int ans = 0;
				string x = as.top(); as.pop();
				string y = as.top(); as.pop();
                if ( s[i] == '+' ) ans = stol(x) + stol(y); 
				if ( s[i] == '-' ) ans = stol(x) - stol(y); 
				if ( s[i] == '*' ) ans = stol(x) * stol(y); 
				if ( s[i] == '/' ) ans = stol(x) / stol(y); 
                string tmp ="";
				if ( ans < 0) {
					ans*= -1;
					tmp = tmp +  "-" + to_string(ans);
				} else tmp = to_string(ans);
				as.push(tmp);
			}
			else as.push(string(1,s[i]));
		}
		
		cout << as.top() << endl;
	}
}

