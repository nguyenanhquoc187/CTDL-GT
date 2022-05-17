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
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    
    while (1)
    {
        long long n, k;
        cin >> n >> k;
        if (n == 0 && k == 0) break;
        cout << poww(n, k) << endl;
    }
}