#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int n , k , a[11][11] , check[11] = {0} , dem = 0 , b[11] ;
vector<int> v[12];
void backtracking(int j, int sum) {	
	for (int i=1;i<=n;i++) {
		if (check[i] == 0 ) {
			b[j] = i;
			sum += a[j][i];
			check[i] = 1;
			if ( j == n  && sum == k) {
				for (int l=1; l <= n; l++) v[dem].push_back(b[l]);
				dem++;
			}
			else if (j < n && sum < k) backtracking(j+1, sum ); 
			sum-=a[j][i];
			check[i] = 0;
		} 
	}
	
}
int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k;
	for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) cin >> a[i][j];
	backtracking(1,0);
	cout << dem << endl;
	for (int i=0;i<dem;i++) {
		for (int j =0;j<n;j++) cout << v[i][j] << " ";
		cout <<endl;
	}
}

