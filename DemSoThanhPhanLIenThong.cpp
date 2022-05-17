#include<bits/stdc++.h>
using namespace std;
int chuaxet[100],n, a[100][100],dem = 0;
void BFS(int u) {
    queue<int> q;
    q.push(u);
    chuaxet[u] = 0;
    while (q.size()!=0) {
        int s = q.front();
        q.pop();
        for (int i=1;i<=n;i++) {
            if (a[s][i] && chuaxet[i]) {
                q.push(i);
                chuaxet[i] = 0;
            }
        }
    }
}
void CountTPLT() {
    for (int i=1;i<=n;i++) {
        if (chuaxet[i]) {
            dem++;
            BFS(i);
        }
    }
}
int main() {
    cin >> n;
    for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) cin >> a[i][j];
    for (int i=1;i<=n;i++) chuaxet[i] = 1;
    CountTPLT();
    cout<<dem;
}