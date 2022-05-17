#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a[11]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000} ;
    int t;
    cin >> t;
    while (t--) {
        int n,count = 0;
        cin >> n;
        for (int i=9;i>=0;i--) {
            while ( n >= a[i] ) {
                count++;
                n= n -a[i];
            }
        }
        cout<<count<<endl;
    }
}