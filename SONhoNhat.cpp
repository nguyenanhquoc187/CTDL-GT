#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int s, d;
        cin >> s >> d;
        if ( s > 9*d) cout<<-1;
        else {
            string a;
            while ( d > 0) {
                if (s > 9 )a = a + '9' , s-=9; else a = a + to_string(s) , s= 0;
                d--;
            }
            reverse(a.begin(),a.end());
            if (a[0] == '0') {
                for (int i=1;i<a.size();i++) if (a[i] != '0' ) {
                    a[i] -=1;
                    break;
                }
                a[0] = '1';
            }
            cout << a;
        }
        cout<<endl;
    }
}