#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
long long mod = 1e9 + 7;
long long sqr(long long x) {return x*x;}
long long poww(long long a, long long b) {
    if (b == 0) return 1;
    if (b%2==0) return sqr( poww(a,b/2) ) % mod;
    else 
    return  (a *  ( sqr( poww(a, b /2)  ) % mod  )  ) %  mod;
}
long long Daoso(long long n) {
    long long s=0;
    while (n> 0) {
        s = s*10 + n%10;
        n/=10;
    }
    return s;
}
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n;
        k = Daoso(n);
        cout << poww(n, k) << endl;
    }
}