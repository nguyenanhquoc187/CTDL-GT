#include <bits/stdc++.h>
using namespace std;
int f[100];
int GiaiMa(string s) {
    memset(f,0,sizeof(f));
    f[-1] = 1;
    f[0] = 1;
    if (s[0] == '0') return 0;
    for (int i=1;i<s.size() ; i++) {
        int x = ( s[i-1] - '0')* 10 + (s[i] - '0'); 
        if (x == 0) return 0;   // 2 số 0 cạnh nhau
        else if (x == 10 || x == 20) f[i] = f[i-2]; // s[i] = 0 va s[i-1] < 2
        else if (x% 10 == 0) return 0;  // s[i] = 0 & s[i-1] > 2
        else if ( x <10 || x > 26  ) f[i] = f[i-1];  // s[i-1] = 0  || s[i-1] != 0
        else f[i] = f[i-2] + f[i-1];    
    }
    return f[s.size() - 1];
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        string s;
        cin >> s;
        int count = GiaiMa(s);
        cout << count << endl;
    }
}