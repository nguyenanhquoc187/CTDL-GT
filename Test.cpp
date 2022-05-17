#include<bits/stdc++.h>
using namespace std;
#define inf 1000000
int n, a[100][100], d[100][100], Next[100][100];
void Floyd() {
    for (int i = 1 ; i <= n ; i++) {
        a[i][i] = 0;
        for (int j = 1 ; j <= n ; j++) {
            d[i][j] = a[i][j];
            if (a[i][j] == inf ) Next[i][j] = -1;
            else Next[i][j] = j;
        }
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <=n ; i++) {
            for (int j = 1; j <= n ;j++) {
                if ( d[i][j] > d[i][k] + d[k][j] && d[i][k] != inf && d[k][j] != inf) {
                    d[i][j] = d[i][k] + d[k][j];
                    Next[i][j] = Next[i][k];
                }
            }
        }
    }
    // in duong di
    for (int i = 1 ; i <= n ;i++) {
        for (int j = 1; j <= n; j++) {
            cout <<"K/c " << i << "-> " << j << " = ";
            if (Next[i][j] == -1 )  {
                cout << "INF;\n";
                continue;
            }
            cout << d[i][j] << ";  ";
            if (i == j) {
                cout << i << endl;
                continue;
            }
            int u = i;
            while (u != j) {
                cout << u << " -> ";
                u = Next[u][j];
            }
            cout << u;
            cout << endl;
        }
        cout << endl;
    }
}
int main () {
    cin >> n;
    for (int i = 1; i <= n ;i++) for (int j = 1; j <= n ; j++) {
        cin >> a[i][j];
        if (a[i][j] == 0) a[i][j] = inf;
    }
    Floyd();
}