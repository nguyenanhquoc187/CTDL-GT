#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
long long f[100];
char Try(int n, long long k) {
    if (n==1) return 'A';
    if (n==2) return 'B'; 
    if (k <= f[n-2] ) return Try(n-2,k); else return Try(n-1,k - f[n-2]  ); 
}
int main () {
    f[1] = 1; f[2] = 1;
    for (int i=3;i<94;i++) f[i] = f[i-2] + f[i-1];
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        char s = Try(n,k);
        cout<<s;
        cout<<endl;
    }
}