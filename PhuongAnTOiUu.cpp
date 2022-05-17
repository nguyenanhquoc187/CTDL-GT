#include<bits/stdc++.h>
#define endl '\n'
bool next_binary(int a[], int n) {
    int index = -1;
    for (int i=n-1;i>=0;i--) {
        if (!a[i]) {
            index = i;
            break;
        }
    }
    if (index == -1) return 0;
    for (int i=index ; i<n;i++) a[i] = 1 - a[i];
    return 1;
}
using namespace std;
int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n , m ;
	cin >> n >> m;
	int a[n+1] , b[n+5] = {0} , v[n+5] ;
	vector<int> d;
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=0;i<n;i++) cin >> v[i];
	int Max = 0;
	while (next_binary(b,n)) {
		int ans = 0, thetich = 0;
		for (int i=0;i<n;i++) {
			if (b[i] ) {
				ans+= a[i];
				thetich+= v[i];
			}
		}
		if (ans > Max && thetich <= m) {
			d.clear();
			Max = ans;
			for (int i=0;i<n;i++)  d.push_back(b[i]);
		}
	}
	cout << Max <<endl;
	for (int i = 0 ;i < d.size() ; i++) cout << d[i] << " ";
}

