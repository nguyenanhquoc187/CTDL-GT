#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
char c, a[100];
int k;
// set<string> st;
void in() {
    string s;
    for (int i=1;i<=k;i++) cout<<a[i];
    cout<<endl;
}
void Try(int i, int i2) {
    // char  x = a[i- 1] + 1; 
    for (int j=i2;j<=c;j++) {
        a[i] = (char) j;
        if (i == k ) in();
        else Try(i+1, j);
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> c >> k;
    a[0] = 'A' ;
    Try(1,'A');
    // for (auto i: st) cout<<i<<endl;
}
