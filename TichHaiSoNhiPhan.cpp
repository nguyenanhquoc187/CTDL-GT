#include <bits/stdc++.h>
using namespace std;
long long To_Decimal(string s) {
    long long n=0;
    for (int i= s.size() - 1, j = 0; i >= 0 ;i--,j++) {
        if (s[i] == '1') n += pow(2,j);
    }
    return n;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        string a,b;
        cin >> a >> b;
        cout << To_Decimal(a)*To_Decimal(b) << endl;
    }
}