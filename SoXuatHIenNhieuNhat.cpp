#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while (t--) {
        int n;
        cin >> n;
        int check = 0;
        int a[n],b[100000]={0};
        for (int i=0;i<n;i++) {
			cin >> a[i];
			b[ a[i] ]++;
		}
        int max = 0 , k;
		for (int i=0;i<n;i++) {
			if ( b[ a[i] ] > max) {
				max = b[ a[i] ];
				k = a[i];
			}
		}
        if (max > n/2) cout<<k; else cout<<"NO";
        cout<<endl;
	}
}