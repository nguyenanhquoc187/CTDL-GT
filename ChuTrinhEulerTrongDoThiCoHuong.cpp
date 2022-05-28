#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int v,e;
        cin >> v >> e;
        int degR[v+1] = {0},degV[v+1] = {0};
        for (int i=0;i<e;i++) {
            int x,y;
            cin >> x >> y;
            degR[x]++;
            degV[y]++;
        }
        int check =1;
        for (int i=1;i<=v;i++) {
            if ( degR[i] != degV[i] ) {
                check = 0; break;
            }
        }
        if (check) cout<<1; else cout<<0;
        cout<<endl;
    }
}
