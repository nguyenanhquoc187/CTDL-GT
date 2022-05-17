#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    long long a1 = a[0]* a[1], b = a[n-2]*a[n-1] ,c , d= a[n-3]*a[n-2] * a[n-1];
    c = a1 * a[n-1];
    long long Max = max( max(a1,b) , max(c,d) );
    cout<<Max;
}