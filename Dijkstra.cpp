#include<bits/stdc++.h>
using namespace std;
int a[100][100] , n  , d[100], truoc[100];
vector<int> v, t ;
void in(int s) {
    d[s] = 0;
    for (int i=1;i<=n;i++) {
        cout<<"K/c "<<s<<" -> " << i << " = " << d[i] <<"; " ;
        cout << i << "<- ";
        int u = truoc[i];
        while (u != s) {
            cout << u <<" <- ";
            u = truoc[u];
        }
        cout<<s <<endl;
    }
}
void Dijkstra(int s) {
    d[s] = 0 ;
    for (int i=0;i<n;i++) if (v[i] != s) t.push_back( v[i] );
    for (int i = 1 ;i<=n;i++)  {
        d[i] = a[s][i]; truoc[i] = s ;
    }
    while (t.size() != 0) {
        int u= 0, min = 1e9;
        for (int i=0;i<t.size();i++) {
            if (  d[ t[i] ] < min ) {
                min = d[ t[i] ];
                u = t[i];
            }
        }
        if (u == 0) break;
        for (int i=0;i<t.size();i++) if (t[i] == u) t.erase(t.begin() + i);
        for (int i = 0; i<t.size();i++) {
            if (d[u] + a[u][ t[i] ]  < d[ t[i] ] ) {
                d[ t[i] ] = d[u] + a[u][ t[i] ] ;
                truoc[ t[i] ] = u;
            }
        }
    }
    if (t.size() != 0) {
        for (int i=1;i<=n;i++) {
            cout<<"K/c "<<s<<" -> " << i;
            if (i!= s) cout << "= INF;"; else cout<<" = " << s <<";";
            cout<<endl;
        }
    } else in(s);
} 
int main () {
    int s;
    cin >> n >> s; 
    for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) {
        cin >> a[i][j];
        if (a[i][j] ==0) a[i][j] = 1e9;
    }
    for (int i=1;i<=n;i++) v.push_back(i);
    Dijkstra(s);
}