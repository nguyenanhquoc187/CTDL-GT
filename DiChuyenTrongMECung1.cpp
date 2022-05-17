#include<bits/stdc++.h>
using namespace std;
int n, a[100][100] = {0}, check =0;
deque<char> s;
void in() {
    deque<char> c(s);
    while (c.size()!=0) {
        cout<<c.front();
        c.pop_front();
    }
    cout<<" ";
}
void Try(int i, int j) {
    if (a[1][1]==0) {
        check = 0;
        return;
    }
    if (i == n && j==n) {
        in();
        check = 1;
    }
    if ( a[i+1][j] ) {
        s.push_back('D');
        Try(i+1,j);
        s.pop_back();
    }
    if (a[i][j+1]  ) {
        s.push_back('R');
        Try(i,j+1);
        s.pop_back();
    }   
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        check = 0;
        s.clear();
        cin >> n;
        for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) cin >> a[i][j];
        Try(1,1);
        if (!check) cout<<-1;
        cout<<endl;
    }
}