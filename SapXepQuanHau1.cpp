#include <bits/stdc++.h>
using namespace std;
int dem =0, nguoc[100],xuoi[100], a[100],n;
void Try(int i) {
    for (int j=1;j<=n;j++) {
        if (a[j] && xuoi[i - j + n] && nguoc[i + j - 1] ) {
            a[j] = 0;
            xuoi[i - j + n] = 0;
            nguoc[i + j - 1] = 0;
            if (i == n) dem++; else Try(i+1);
            a[j] = 1;
            xuoi[i - j + n] = 1;
            nguoc[i + j - 1] = 1;
        }
    }
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        dem = 0;
        cin >> n;
        fill_n(nguoc,2*n+1,1);
        fill_n(xuoi,2*n+1,1);
        fill_n(a,n+1,1);
        Try(1);
        cout<<dem<<endl;
    }
}