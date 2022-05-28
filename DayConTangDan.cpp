#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int a[55],n,b[55];
vector<string> s;
int check() {
    vector<int> v;
    for (int i=0;i<n;i++) if (a[i]) v.push_back(b[i]);
    int x = v.size() - 1;
    if (v.size() ==1) return 0;
    for (int i=0;i<x;i++) if (v[i] > v[i+1] ) return 0; 
    return 1;
}
void in() {
    if (check()) {
        string str;
        for (int i=0;i<n;i++) if (a[i]) str = str + to_string(b[i]) + " ";
        s.push_back(str);
    }
}
void sinh(int i) {
    for (int j=0;j<=1;j++) {
        a[i] = j;
        if (i == n - 1) in(); else sinh(i+1);
    }
}
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=0;i<n;i++) cin >> b[i];
    sinh(0);
    sort(s.begin(),s.end());
    for (int i=0;i<s.size();i++) cout<<s[i] << endl;
}