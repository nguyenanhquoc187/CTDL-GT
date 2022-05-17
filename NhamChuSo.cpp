#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int Min(string a) {
    int n = 0;
    for (int i= 0;i<a.size();i++) if (a[i] == '6' ) n = n*10 + 5; else  n= n*10 + (a[i] - '0');
    return n;
}
int Max(string a) {
    int n = 0;
    for (int i= 0;i<a.size();i++) if (a[i] == '5' ) n = n*10 + 6; else  n= n*10 + (a[i] - '0');
    return n;
}
int main () {
    string a,b;
    cin >> a >> b;
    cout<<Min(a) + Min(b) <<" "<<Max(a) + Max(b);
}
