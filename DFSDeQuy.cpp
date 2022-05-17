#include<bits/stdc++.h>
using namespace std;
#define MAX 100
class graph {
    int n, a[MAX][MAX];
public:
    int chuaxet[MAX];
    void readdata() ;
    void itit();
    void dfs(int u);
};
void graph::readdata() {
    cin >> n;
    for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) cin >> a[i][j];
}
void graph::itit() {
    for (int i=1;i<=n;i++) chuaxet[i] = 1;
}
void graph::dfs(int u) {
    cout<<u<<" ";
    chuaxet[u]= 0;
    for (int i=1;i<=n;i++) {
        if (a[u][i]==1 && chuaxet[i] == 1) dfs(i); 
    }
}
int main() {
    graph g; g.readdata() ; g.itit() ; g.dfs(1);
}