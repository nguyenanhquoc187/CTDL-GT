#include <bits/stdc++.h>
using namespace std;
struct data {
    int st,nd;
};
bool cmp(data a, data b) {
    if (a.nd == b.nd) return a.st < b.st;
    return a.nd > b.nd ;
}
int main () {
	int t;
	cin >> t;
	while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];      
        set<int> s(a,a+n);
        int j=0;
        data b[n];
        for (auto i : s) {
            b[j].st = i ;
            b[j].nd = count(a,a+n,i);
            j++;
        }
        sort(b,b+j,cmp);
        for (int i=0;i<j;i++) {
            for (int k=1;k<b[i].nd;k++) cout<<b[i].st <<" "; 
            cout<<b[i].st<<" ";
        }
        cout<<endl;
	}
}