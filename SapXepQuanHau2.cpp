#include <bits/stdc++.h>
using namespace std;
int nguoc[100],xuoi[100], a[100], b[100][100] , c[100] , Max;
void check() {
    int sum = 0;
    for (int i=1;i<=8;i++) {
        sum+= b[i][ c[i] ];
    }
    Max = max(sum,Max);
}
void Try(int i) {
    for (int j=1;j<=8;j++) {
        if (a[j] && xuoi[i - j + 8] && nguoc[i + j - 1] ) {
            a[j] = 0;
            c[i] = j;
            xuoi[i - j + 8] = 0;
            nguoc[i + j - 1] = 0;
            if (i == 8) check(); else Try(i+1);
            a[j] = 1;
            xuoi[i - j + 8] = 1;
            nguoc[i + j - 1] = 1;
        }
    }
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        Max = 0;
        for (int i=1;i<=8;i++) for (int j=1;j<=8;j++) cin >> b[i][j];
        fill_n(nguoc,17,1);
        fill_n(xuoi,17,1);
        fill_n(a,9,1);
        Try(1);
        cout<<Max<<endl;
    }
}