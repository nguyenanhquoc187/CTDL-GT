#include <bits/stdc++.h>
using namespace std;
int x;
struct data {
    int st,nd;
};
bool cmp(data a, data b) {
    if ( abs(x-a.st) == abs(x - b.st)  )  return a.nd < b.nd;
    return abs(x-a.st) < abs(x - b.st) ;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n >> x;
        data a[n];
        for (int i=0;i<n;i++) {
            cin >> a[i].st;
            a[i].nd = i;
        }
        sort(a,a+n,cmp) ;
        for (int i=0;i<n;i++) cout << a[i].st << " ";
        cout<<endl;
    }
}