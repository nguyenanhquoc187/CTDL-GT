#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,k,x, check =0;
        cin >> n >> k;
        vector<long long> v;
        for (int i=0;i<n;i++) {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end() );
        for (int i=0;i<n ;i++) {
            for (int j=i+1;j<n;j++) {
                if (binary_search(v.begin()+j+1,v.end(),k -v[i]- v[j]) ) {
                    cout<<"YES";
                    check = 1;
                    break;
                }
            }
            if (check) break;
        }
        if (!check) cout<<"NO";
        cout<<endl;
    }
}