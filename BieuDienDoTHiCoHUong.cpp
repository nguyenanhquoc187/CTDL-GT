#include<bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        vector<pair<int,int> > v;
        for (int i=0;i<m;i++) {
            int x,y;
            cin >> x >> y;
            v.push_back( pair<int,int>(x,y) );
        }
        for (int i=1;i<=n;i++) {
            cout<<i<<": ";
            for (int j=0;j<m;j++) {
                if (v[j].first == i) cout<<v[j].second<<" ";
            }
            cout<<endl;
        }
    }
}