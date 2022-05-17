#include <bits/stdc++.h>
using namespace std;
int a[30],n,k, dem = 0, b[30], dem2 = 0;
string s;
bool check() {
    int dem=0;
    for (int i=0;i<n;i++) {
        if (!a[i]) dem++; else {
            if (dem == k) break;
            dem = 0;
        }
    }
    if (dem == k) return 1;
    return 0;
}
void in() {
    if (check()) {
        dem2++;
        for (int i=0;i<n;i++) if (!a[i]) s+="A"; else s+="B";
        s+=" ";
    } 
}
void sinh(int i) {
    for (int j=0;j<=1;j++) {
        a[i] = j;
        if (i == n - 1) in(); else sinh(i+1);
    }
}
int main () {
    cin >> n >> k;
    sinh(0);
    cout<<dem2<<endl;
    for (int i=0;i<s.size();i++) 
        if(s[i] ==' ') cout<<endl; else cout<<s[i];
}