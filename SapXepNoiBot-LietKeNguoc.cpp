#include <bits/stdc++.h>
using namespace std;
struct data {
    string s="";
    vector<int> c;
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
            int check = 0;
            for (int j=0;j<n-i-1;j++) {
                if (a[j] > a[j+1] ) {
                    swap(a[j], a[j+1]);
                    check = 1;
                }
            }
            if (!check ) break;
            b[x].s = b[x].s + "Buoc " + to_string(i+1) +": ";
            for (int j=0;j<n;j++) b[x].c.push_back(a[j]); 
            x++;
        }
        for (int i=x-1;i>=0;i--) {
            cout << b[i].s ;
            for (int j=0;j<n;j++) cout<<b[i].c[j]<<" ";
            cout<<endl;
        }
    }
}