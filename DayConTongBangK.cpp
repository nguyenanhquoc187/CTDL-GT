#include<bits/stdc++.h>
using namespace std;
bool next_binary(int a[], int n) {
    int index = -1;
    for (int i=n-1;i>=0;i--) {
        if (!a[i]) {
            index = i;
            break;
        }
    }
    if (index == -1) return 0;
    for (int i=index ; i<n;i++) a[i] = 1 - a[i];
    return 1;
}
int check(int a[], int b[], int n, int k) {
    long s=0;
    for (int i=0;i<n;i++) if (a[i] == 0) s+=b[i];
    if (s==k) return 1; return 0;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,k, ok =0;
        cin >> n >> k;
        int a[n] = {0},b[n];
        for (int i=0;i<n;i++) cin >> b[i];
        sort(b,b+n);
        while (next_binary(a,n) ) {
            if ( check(a,b,n,k) ) {
                vector<int> v;
                for (int i=0;i<n;i++) if (!a[i]) v.push_back(b[i]);
                cout<<"[";
                for (int i=0;i<v.size() - 1;i++) cout<<v[i]<<" ";
                cout<<v[v.size() - 1]<<"]";
                ok = 1;
                cout<<" ";
            }
        }
        if (!ok) cout<<-1;
        cout<<endl;
    }
}