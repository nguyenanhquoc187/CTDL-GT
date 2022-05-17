#include<bits/stdc++.h>
using namespace std;
int n , h[30][30] = {0} ,a[9] , b[9] ;
void MaDiTuan(int i, int x, int y, int &q) {
    int q1  = 0, k = 0;
    while (k<8 && q1 == 0) {
        k++;
        q1 = 0;
        int u = x + a[k]; 
        int v = y + b[k];
        if ( u>=1 && u<=n  &&  v >= 1 && v<=n  && h[u][v] ==0 ) {
            h[u][v] = i;
            if (i < n*n) {
                MaDiTuan(i+1,u,v,q1);
                if (!q1) h[u][v] = 0;
            } else q1 = 1;
        }
    } 
    q = q1;
}
int main () {
    cin >> n;
    a[1] = 2 ; b[1] =1;
    a[2] =1 ; b[2] =2;
    a[3] =-1 ; b[3] =2;
    a[4] =-2; b[4] = 1;
    a[5] =-2 ; b[5] = -1;
    a[6] = -1; b[6] =-2;
    a[7] =1 ; b[7] =-2;
    a[8] = 2; b[8] =-1;
    for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) h[i][j] = 0;
    int x0,y0;
    cin >> x0 >> y0;
    h[x0][y0] = 1;
    int q=0;
    MaDiTuan(2,x0,y0,q);
    if (q) {
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=n;j++) cout<<h[i][j]<<" ";
            cout<<endl;
        }
    } else cout<<"No solution";
}
