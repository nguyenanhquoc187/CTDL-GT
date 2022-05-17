#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) { 
        int v,e;
        cin >> v >> e;
        int b[v+1]={0};
        for (int i=0;i<e;i++) {
            int x,y;
            cin >> x >> y;
            b[x]++;
            b[y]++;
        }
        int le =0;
        for (int i=1;i<=v;i++) {
            if (b[i] % 2 != 0 ) le++;
        }
        if (le == 0) cout<<2; 
        else if (le == 2) cout<<1; 
        else cout<<0;
        cout<<endl;
    }
}