#include <bits/stdc++.h>
using namespace std;
int n,k,a[30];
void incauhinh() {
    for (int i=0;i<k;i++) cout<<a[i];
    cout<<" ";
}
void sinhtohop(int i) {
    for (int j=a[i-1]+1;j<=n-k+i+1;j++) {
        a[i]=j;
        if (i==k-1) incauhinh(); else sinhtohop(i+1);
    }
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        sinhtohop(0);
        cout<<endl;
    }
}