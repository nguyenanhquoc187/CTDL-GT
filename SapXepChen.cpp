#include <bits/stdc++.h>
using namespace std;
int main () {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    multiset<int> s;
    for (int i=0;i<n;i++) {
        s.insert(a[i]);
        cout<<"Buoc "<<i<<": ";
        for (auto i : s) cout<<i<<" ";
        cout<<endl;
    }
}