#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int n, k , a[105] , dem = 0 ;
void backTracking(int t,int j, int x) {
	for (int i = t ;i<n;i++) {
		if ( a[i] > x  && j < k - 1)  backTracking(i+1, j+1, a[i] );
		else if (a[i] > x && j == k - 1 ) dem++;
 	}
}
int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k;
	for (int i=0;i<n;i++) cin >> a[i];
	backTracking(0,0,0);
	cout <<dem;
}

