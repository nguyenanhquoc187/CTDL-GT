#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int n;
string s;
void Try(int i, int k, string x) {
    for (int j = k ; j < n ; j++) {
        x+=s[j];
        cout << x << " ";
        if ( i < n - 1) Try(i+1,j+1, x);
        x.erase(i,1);
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        cin >> n;
        cin >> s;
        Try(0,0,"");
        cout << endl;
    }
}