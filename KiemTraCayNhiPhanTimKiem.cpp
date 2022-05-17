#include<bits/stdc++.h>
using namespace std;
bool check(int a[], int n) {
	for (int i = 0 ; i< n-1 ;i++) {
		if ( a[i] >= a[i+1] ) return 0;
	}
	return 1;
}
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n+4];
		for (int i = 0 ;i < n ;i++) cin >> a[i];
		cout << check(a,n) ;
		cout << endl;
	}
}

