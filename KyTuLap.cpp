#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int n, Min = 1e9 , a[12] = {0}, b[12]={0};
string s[12];
int check(string a, string b) {
    int dem = 0;
    for (int i=0;i<a.size();i++) {
        for (int j=0;j<b.size();j++) if (a[i] == b[j] ) {
            dem++; break;
        }
    }
    return dem;
}
void Try(int i, int sum) {
    for (int j=1;j<=n;j++) {
        if ( a[j] == 0) {
            b[i] = j;
            a[j] = 1;
            int dem = check(s[ b[i-1] ], s[j] );
            sum += dem;
            if (i == n && sum < Min) Min = sum;
            else if (i< n && sum < Min) Try(i+1,sum);
            a[j] = 0;
            sum -=dem;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=1;i<=n;i++) cin >> s[i];
    s[0] = "";
    Try(1,0);
    cout<<Min;
}