#include <bits/stdc++.h>
using namespace std;
struct data{
    string s,s2;
};
int main () {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n],x=0;
    data b[100];
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<n-1;i++) {
        int k=i;
        for (int j=i+1;j<n;j++) {
            if (a[j] < a[k]) {
                k = j;
            }
        }
        swap(a[i],a[k]);
        // cout<<"Buoc "<<i+1<<": ";
        b[x].s = b[x].s + "Buoc " + to_string(i+1) + ": ";
        for (int i=0;i<n;i++) b[x].s2 = b[x].s2 + to_string(a[i]) + " ";
        x++;
        // cout<<endl;
    }
    for (int i=x-1;i>=0;i--) {
        cout<<b[i].s << b[i].s2 <<endl;
    }
}