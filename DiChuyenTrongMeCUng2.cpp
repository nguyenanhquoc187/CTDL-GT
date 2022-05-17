#include<bits/stdc++.h>
using namespace std;
int n, a[100][100] = {0}, check =0, chuaxet[100][100];
vector<string > v;
void Try(int i, int j, string s) {
    if (a[1][1] == 0) return ;
    if (i == n && j == n) {
        v.push_back(s);
        return;
    }
    if ( i< n && a[i+1][j] && chuaxet[i+1][j] ) {
        chuaxet[i+1][j] = 0;
        Try(i+1,j,s+'D');
        chuaxet[i+1][j] = 1;
    }
    if ( j > 1 && a[i][j-1] && chuaxet[i][j-1] ) {
        chuaxet[i][j-1] = 0;
        Try(i,j-1,s+'L');
        chuaxet[i][j-1] = 1;
    }
    if ( j < n && a[i][j+1] && chuaxet[i][j+1] ) {
        chuaxet[i][j+1] = 0;
        Try(i,j+1,s+'R');
        chuaxet[i][j+1] = 1;
    }
    if ( i > 1 && a[i-1][j] && chuaxet[i-1][j] ) {
        chuaxet[i-1][j] = 0;
        Try(i-1,j,s+'U');
        chuaxet[i-1][j] = 1;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        v.clear();
        check = 0;
        cin >> n;
        for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) {
            cin >> a[i][j];
            chuaxet[i][j] = 1;
        }
        chuaxet[1][1] = 0;
        Try(1,1,"");
        if (v.size() == 0) cout<<-1;
        else for (int i=0;i<v.size();i++) cout<<v[i] << " ";
        cout<<endl;
    }
}