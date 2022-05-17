#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,x;
    cin >> n;
    vector<int> v;
    for (int i=0;i<n;i++) {
        cin >> x;
        v.push_back(x);
    }
    cin >> x;
    for (int i=0;i<v.size();i++) {
        if (v[i]== x ) {
            v.erase(v.begin() + i);
            i--;
        }
    }
    for (int i=0;i<v.size();i++) cout<<v[i]<<" ";
}