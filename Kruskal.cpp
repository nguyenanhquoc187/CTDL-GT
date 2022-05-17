#include<bits/stdc++.h>
using namespace std;
struct edge {
    int dau, cuoi ,c;
};
int a[100][100], chuaxet[100], n, ne, at[100][100] , dH, neT ;
edge g[100],t[100];
bool cmp(edge a, edge b) {
    return a.c < b.c;
}
void dfsT(int u) {
    chuaxet[u] = 0;
    for (int i=1;i<=n;i++) {
        if (at[u][i] !=0 && chuaxet[i] ) dfsT(i);
    }
}
void sort1() {
    for (int i=ne;i>=1;i--) {
        for (int j=1;j<i;j++) {
            if (g[j].c > g[j+1].c) swap(g[j],g[j+1]);
        }
    }
}
void kruskal () {
    for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) at[i][j] = 0;
    neT = 0;
    dH = 0;
    // sort(g,g+ne,cmp);
    sort1();
    for (int e=1;e<=ne;e++) {
        for (int i=1;i<=n;i++) chuaxet[i] = 1;
        dfsT(g[e].dau);
        if (chuaxet[g[e].dau] + chuaxet[g[e].cuoi] != 0) {
            neT++;
            t[neT].dau = g[e].dau; t[neT].cuoi = g[e].cuoi; t[neT].c = g[e].c;
            at[ g[e].dau ][ g[e].cuoi ] = at[ g[e].cuoi ][ g[e].dau ] = 1;
            dH+=g[e].c;
        }
    }
    if (neT != n-1) cout<<"Do thi khong lien thong\n";
    else {
        cout<<"dh = "<<dH<<"\n";
        for (int i=1;i<=neT;i++) cout<<t[i].dau<<" "<<t[i].cuoi<<endl;
    }
}
int main () {
    ne = 0;
    cin >> n;
    for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) {
        cin >> a[i][j];
        if (a[i][j] !=0 && i<j) {
            ne++;
            g[ne].dau = i ; g[ne].cuoi = j; g[ne].c =a[i][j];
        }
    }
    kruskal();
}