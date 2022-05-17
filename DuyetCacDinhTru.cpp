#include<bits/stdc++.h>
using namespace std;
int n,a[100][100],chuaxet[100];
queue<int> q;
void BFS(int u) {
    q.push(u);
    chuaxet[u] = 0;
    while (q.size() != 0) {
        int s = q.front();
        q.pop();
        for (int i=1;i<=n;i++) {
            if (a[s][i] && chuaxet[i] ) {
                q.push(i);
                chuaxet[i] = 0;
            }
        }
    }
}
void Duyet_tru() {
    int check;
    for (int i=1;i<=n;i++) chuaxet[i] = 1;
    for (int i=1;i<=n;i++) {
        check = 0;
        chuaxet[i] = 0;
        if (i == n ) BFS(i-1); else BFS(i+1);
        for (int j=1;j<=n;j++) if (chuaxet[j]) check = 1;
        if (check) cout<<i<<" ";
        for (int j=1;j<=n;j++) chuaxet[j] = 1;
    }
}
int main () {
    cin >> n;
    for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) cin >> a[i][j];
    Duyet_tru();
}