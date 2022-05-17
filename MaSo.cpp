#include<bits/stdc++.h>
using namespace std;
int n,a[7];
vector<string> v;
void in(string s) {
    cout<<s;
    for (int i=1;i<=n;i++) cout<<a[i];
    cout<<endl;
}
void Try(int i,string s) {
    for (int j=1;j<=n;j++) {
        a[i] = j;
        if(i ==n) in(s); else Try(i+1,s);
    }
}
int main(){
    cin >> n;
    string s;
    for (int i=0;i<n;i++) s = s + (char) (i + 'A');
    v.push_back(s);
    while (next_permutation(s.begin(),s.end()) ) {
        v.push_back(s);
    }
    for (int i=0;i<v.size();i++) {
        Try(1, v[i]);
    }
}
