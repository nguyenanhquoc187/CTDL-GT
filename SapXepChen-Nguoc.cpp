#include <bits/stdc++.h>
using namespace std;
struct data {
    string s="";
    vector<int> c;
};
int main () {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    data b[100];
    for (int i=0;i<n;i++) cin >> a[i];
    multiset<int> s;
    for (int i=0;i<n;i++) {
        s.insert(a[i]);
        // cout<<"Buoc "<<i<<": ";
        b[i].s = b[i].s + "Buoc " + to_string(i) + ": ";
        for (auto j : s) b[i].c.push_back(j);
    }
    for (int i=n-1;i>=0;i--) {
        cout<<b[i].s;
        for (int j=0;j<b[i].c.size();j++) cout<<b[i].c[j]<<" ";
        cout<<endl;
    }
}