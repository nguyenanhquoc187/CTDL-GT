#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		set<int> s;
		for (int i = 0 ; i< n ;i++) {
			int u,v;
			char c;
			cin >> u >> v >> c;
			s.insert(u);
			s.insert(v);
		}
		for (auto &i : s) cout << i << " ";
		cout << endl;
	}
}
