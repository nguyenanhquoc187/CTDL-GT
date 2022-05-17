#include<bits/stdc++.h>
using namespace std;
int n,a[100][100], chuaxet[100];
void DFS(int u) {
    chuaxet[u] = 0;
    for (int i=1;i<=n;i++) {
        if (a[u][i] && chuaxet[i] ) DFS(i);
    }
}
void Duyet_cau() {
    int check ;
    for (int i=1;i<=n;i++) chuaxet[i] = 1;
    for (int i=1;i<=n;i++) {
        for (int j=i+1;j<=n;j++) {
            check = 0;
            if ( a[i][j] ) {
                a[i][j] = 0; a[j][i] = 0;
                DFS(1);
                for (int k=1;k<=n;k++) if (chuaxet[k] ) check = 1;
                if (check) cout<<i<<" "<<j<<endl;
                for (int i=1;i<=n;i++) chuaxet[i] = 1;
                a[i][j] = 1; a[j][i] = 1;
            }
        }
    }
}
int main () {
    cin >> n;
    for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) cin >> a[i][j];
    Duyet_cau();
}