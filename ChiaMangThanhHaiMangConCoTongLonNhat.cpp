#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main () {
    int t; 
    cin >> t;
    while (t--) {
        int n,k;
        long long s= 0;
        cin >> n >> k;
        int a[n];
        for (int i=0;i<n;i++) {
            cin >> a[i];
            s+=a[i];
        }
        sort(a,a+n);
        long long s1 = 0;
        k = min(k,n-k);
        for (int i=0;i<k;i++) {
            s1+= a[i];
            s -=a[i];
        }
        cout<<s - s1 <<endl;
    }
}