#include <bits/stdc++.h>
using namespace std;
int check(int a[], deque<int> d) {
    for (int i=0;i<d.size();i++) {
        if (a[i] != d[i] ) return 0;
    }
    return 1;
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        deque<int> d(a,a+n);
        sort(d.begin(),d.end());
        int k=0;
        while (!check(a,d) ) {
            int x=d.back();
            d.pop_back();
            d.push_front(x);
            k++;
        }
        cout<<k<<endl;
    }
}