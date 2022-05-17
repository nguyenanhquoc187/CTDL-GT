#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        vector<string> v{"0","1"};
        cin >> n;
        if (n==1) {
            cout<<v[0] <<" "<<v[1];
        } else {
            for (int i=2;i<=n;i++) {
                vector<string> v1 = v;
                reverse(v1.begin(),v1.end());
                for (int j=0;j<v1.size();j++) v.push_back(v1[j]);
                for (int j=0;j<v.size();j++) if (j<v.size()/2 ) v[j].insert(0,"0"); else v[j].insert(0,"1"); 
            }
            for (int i =0;i<v.size();i++) cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}