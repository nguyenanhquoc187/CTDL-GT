#include<bits/stdc++.h>
using namespace std;
int n,m, d[105][105] = {0};
int main () {
	cin >> n >> m;
	int x,y,c ;
	memset(d,1000000007,sizeof(d));
	for (int i = 0 ; i < m ; i++) {
		cin >> x >> y >> c ;
		d[x][y] = c ;
		d[y][x] = c;
	}
	for (int i = 1; i <= n ;i++) d[i][i] = 0;
	int q;
	cin >> q;
	for (int k = 1 ; k<= n ;k++) {
		for (int i = 1; i<= n ;i++) {
			for (int j = 1; j <= n ; j++) {
				if (d[i][j] > d[i][k] + d[k][j] ) d[i][j] = d[i][k] + d[k][j];
			}	
		}
	}
	while (q--) {
		cin >> x >> y;
		cout << d[x][y]  << endl;
	}
}
