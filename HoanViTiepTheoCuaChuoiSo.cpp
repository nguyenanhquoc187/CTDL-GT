#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int test;
        string s;
        cin >> test >> s;
        if (!next_permutation(s.begin(),s.end())) {
            cout<<test<<" BIGGEST";
        } else cout<<test<<" "<<s;
        cout<<endl;
    }
}