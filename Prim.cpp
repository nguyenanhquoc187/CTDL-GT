#include <bits/stdc++.h>
using namespace std;
int n, a[100][100], dH;
vector<pair<int,int> > T;
vector<int> V,Vh;
void Prim(int s) {
    dH = 0; 
    Vh.push_back(s);
    for (int i=1;i<=n;i++) if (i!=s) V.push_back(i);
    while (V.size() != 0) {
        sort(Vh.begin(), Vh.end() );
        int e = 1e9, x ,y;
        for (int i=0;i<Vh.size();i++) {
            for (int j=0;j<V.size();j++) {
                if (a[ Vh[i] ][ V[j] ] < e &&a[ Vh[i] ][ V[j] ]  != 0) {
                    e = a[ Vh[i] ][ V[j] ]  ;
                    x = Vh[i]; y = V[j];
                }
            }
        }
        dH+=e;
        T.push_back({x,y});
        Vh.push_back(y);
        for (int i=0;i<V.size();i++) if (V[i] == y) V.erase(V.begin() +i);
    }
    cout<<"dH = "<<dH<<endl;
    for (int i=0;i<T.size();i++) {
        if (T[i].first < T[i].second ) cout<<T[i].first<<" "<<T[i].second;
        else cout<<T[i].second<<" "<<T[i].first;
        cout<<endl;
    }
}
int main () {
    int u;
    cin >> n >> u;
    for (int i=1;i<=n;i++) 
        for (int j=1;j<=n;j++) cin >> a[i][j];
    Prim(u);
}