#include <bits/stdc++.h>
using namespace std;
struct data {
    string s,s2;
};
int main () {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,x=0;
        cin >> n;
        int a[n];
        data b[100];
        for (int i=0;i<n;i++) cin >> a[i];
        for (int i=0;i<n-1;i++) {
            for (int j=i+1;j<n;j++) {
                if (a[i] > a[j] ) swap(a[i], a[j]);
            }
            // cout<<"Buoc "<<i+1<<": ";
            b[x].s = b[x].s + "Buoc " + to_string(i+1) +": ";
            for (int i=0;i<n;i++) b[x].s2 = b[x].s2 + to_string(a[i]) + " ";
            // cout<<endl;
            x++;
        }
        for (int i=x-1;i>=0;i--) cout<<b[i].s<<b[i].s2<<endl;
    }
}