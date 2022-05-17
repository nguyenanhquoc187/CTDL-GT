#include <bits/stdc++.h>
using namespace std;
long long trans10 (string s, int k) {
    long long n= 0 ;
    for (int i = s.size() - 1, j =0 ; i >= 0 ; i--, j++) {
        if (s[i] != '0' ) n = n + pow(k,j)*(s[i] - '0');
    }
    return n;
}
string transK(long long n, int k) {
    string s="";
    while (n > 0) {
        s= s+ (char) (n%k + '0');
        n/=k;
    }
    reverse(s.begin() , s.end());
    return s;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int k ; 
        string a, b;
        cin >> k >> a >> b ;
        long long x = trans10(a,k), y = trans10(b,k);
        long long z = x+y;
        cout << transK(z,k) <<endl;
    }
}