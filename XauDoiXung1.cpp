#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int n = s.size() -1 ;
		int dp[n+5][n+5] = {0};
		for (int i = n-1; i>=0 ; i--) {
			for (int j= i+1 ; j<= n ; j++) {
				if ( s[j] != s[i]  ) {
					if (  dp[i][j-1] == 0 || dp[i+1][j] == 0 ) dp[i][j] = 1; else dp[i][j] =  min(dp[i][j-1],dp[i+1][j] ) + 1;
				} else {
					if ( dp[i+1][j-1] == 0) dp[i][j] = 0; 
					else {
						dp[i][j] = dp[i+1][j-1];
					}
				}
				  
			}
		}
		cout << dp[0][n] << endl;
	}
}
