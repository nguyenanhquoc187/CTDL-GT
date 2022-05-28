#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];      
        set<int> s(a,a+n);
        sort(a,a+n);
        cout<< a[n-1] - a[0] + 1 - s.size() <<endl;
	}
}