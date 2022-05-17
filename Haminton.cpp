#include<bits/stdc++.h>
using namespace std;
int a[100][100],n , s, chuaxet[100],x[100];
void Hmt(int k) {
    for (int i = 1;i<=n;i++) {
        if (  a[ x[k-1] ][i] ) 
            if (k == n+1 && i == x[1] ){
                for (int i=1;i<=n;i++) cout<<x[i]<<" ";
                cout<<x[1]<<endl;
        } else if (chuaxet[i] ) {
            x[k] = i;
            chuaxet[i] = 0;
            Hmt(k+1);
            chuaxet[i] = 1; 
        }
    }
}
int main () {
    cin >> n >> s;
    for (int i = 1;i<=n;i++) for (int j=1;j<=n;j++) cin >> a[i][j];
    x[1] = s;
    for (int i=1;i<=n;i++) chuaxet[i] = 1;
	chuaxet[s] = 0;
    Hmt(2);
}