#include<bits/stdc++.h>
using namespace std;
int n,a[16][16], chuaxet[16] , b[16] , s = 0,Min = 1e9;
void DuLich(int i) {
    for (int j=2;j<=n;j++) {
        if (chuaxet[j] ) {
            b[i] = j;
            s += a[ b[i-1] ][j]; 
            chuaxet[j] =0;
            if (i == n && s + a[ j ][ 1 ] < Min) {
                Min = s + a[j][1];
            }  
            else if ( s < Min && i < n) DuLich(i+1);
            s -= a[ b[i-1] ][j] ;
            chuaxet[j] = 1;
        } 
    }
}
int main () {
    cin >> n;
    for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) cin >> a[i][j];
    for (int i=2;i<=n;i++) chuaxet[i] = 1;
    b[1] = 1;
    DuLich(2);
    cout<<Min;
}