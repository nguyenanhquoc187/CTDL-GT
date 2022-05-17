#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
        int n;
        cin >> n;
        int check = 0;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        for (int i=0;i<n;i++) {
            if (count(a+i+1,a+n,a[i] ) >= 1) {
                cout << a[i];
                check = 1;
                break;
            }
        }
        if (!check) cout<<"NO";
        cout<<endl;
	}
}