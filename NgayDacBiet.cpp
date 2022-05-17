#include <bits/stdc++.h>
using namespace std;
int a[100];
string s;
vector<string> v,v1{"02","20","22"};
void Nam(int i) {
    int k;
    if (i==1) k =2 ; else k = 0;
    for (int j=k;j<=2;j+=2) {
        s= s + to_string(j);
        if (i == 4) {
            v.push_back(s);
            s.erase(3,1);
        } else {
            Nam(i+1);
            s.erase(i-1,1);
        }
    }
}
int main () {
    Nam(1);
    vector<string > res;
    for (int i=0;i<v.size();i++) {
        for (int k=0;k<v1.size();k++) {
            res.push_back(v1[k] + "/02/" + v[i] );
        }
    }
    sort(res.begin(),res.end());
    for (int i=0;i<res.size();i++) cout<<res[i]<<endl;
}