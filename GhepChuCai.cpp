#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
bool check(string s) {
    for (int i=1;i<s.size()-1;i++) {
        if (s[i]=='A' && ( s[i+1]!='E'  && s[i-1] != 'E')  ) return 0;
        if (s[i]=='E' && ( s[i+1]!='A'  && s[i-1] != 'A')  ) return 0;
    }
    return 1;
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char c;
    cin >> c;
    string s;
    for (int i='A';i<=c;i++) s+=i;
    if (check(s) ) cout<<s<<endl;
    while (next_permutation(s.begin(),s.end()) ) {
        if (check(s) ) {
            cout<<s<<endl;
    }
        }
}