#include<bits/stdc++.h>
using namespace std;
int a[100][100] , n ,d[100], truoc[100];
void Bellman_Ford(int s) {
    for (int i = 1 ; i<= n ; i++) {
        d[i] = a[s][i];
        truoc[i] = s;
    }
    d[s] = 0;
    for (int k = 1; k <= n-2; k++) 
        for (int v = 1; v <= n ; v++) {
            for (int u = 1; u <=n ; u++) {
                if (d[v] > d[u] + a[u][v] && a[u][v] != 1e9) {
                    d[v] = d[u] + a[u][v];
                    truoc[v] = u;
                }
            }
        }
    for (int i = 1; i <= n; i++) {
        cout << "K/c " << s << "-> " << i << " = " ;
        if (d[i] == 1e9) 
            cout <<"INF;";
        else {
            cout <<d[i] << "; ";
            cout << i << " <- ";
            int u = truoc[i];
            while ( u != s) {
                cout << u << " <- ";
                u = truoc[u];
            }
            cout << s;
        }
        cout <<endl;
    }
}
int main () {
    int s;
    cin >> n >> s;
    for (int i = 1 ; i <=n;i++) 
        for (int j = 1; j <= n ; j++) {
            cin >> a[i][j] ;
            if (a[i][j] == 0) a[i][j] = 1e9;
        }
    Bellman_Ford(s);
}