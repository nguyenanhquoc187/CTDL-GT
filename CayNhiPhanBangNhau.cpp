#include <bits/stdc++.h>
using namespace std;
struct data {
	int u,v ;
	char c;
};
bool cmp(data a, data b) {
	if (a.u == b.u ) return a.v < b.v;
	return a.u < b.u; 
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while (t--) { 
		int n,m;
		cin >> n ;
		data  a[n+5];
		for (int i = 0 ; i < n ; i++) 	cin >> a[i].u >> a[i].v >> a[i].c;
		cin >> m;
		data  b[m+5];
		for (int i = 0 ; i < m ; i++)	cin >> b[i].u >> b[i].v >> b[i].c;
		sort(a,a+n,cmp);
		sort(b,b+n,cmp);
		bool check = 1;
		for (int i = 0 ; i < n ; i++) {
			if (a[i].u != b[i].u || a[i].v != b[i].v || a[i].c != b[i].c ) {
				check = 0; break;
			}
		}
		if (check) cout << 1; else cout << 0;
		cout << endl;
	}
}