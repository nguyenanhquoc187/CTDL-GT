#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while (t--) { 
		string s;
		cin >> s;
		int n = s.size() ;
		int f[n+5][n+5]   ;
		memset(f,0,sizeof(f));
		for (int i = 0 ; i < n;i++) f[i][i] = 1;
		for (int i= n -1; i >=0;i--) {
			for (int j=i+1;j < n ; j++) {
				int k = (j - 1) - (i+1) +1 ;
				if (s[i] == s[j] && f[i+1][j-1] == k ) f[i][j] = f[i+1][j-1] + 2; 
				else f[i][j] = max(f[i][j-1],f[i+1][j]);
			}
		}
		cout << f[0][n-1] <<endl;
	}
}