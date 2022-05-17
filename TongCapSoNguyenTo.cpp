#include <bits/stdc++.h>
using namespace std;
int songuyento(int n) {
    if (n==0 || n==1) return 0;
    for (int i=2;i<=sqrt(n);i++) {
        if (n%i == 0) return 0;
    }
    return 1;
}
int sangnguyento(int a[]) {
    int b[100000] ;
    for (int i=2;i<100000;i++) b[i] = 1;
    for (int i=2;i<100000;i++) {
        if (b[i]) for (int j=2*i;j<100000;j+=i) b[j] = 0;   
    }
    int j=0;
    for (int i=2;i<100000;i++) if (b[i]) {
        a[j] = i;
        j++;
    }
    return j;
}
int main () {
    int a[100000];
    int k = sangnguyento(a);
    int t;
    cin >> t;
    while (t--) {
        int n,ok=0;
        cin >> n;
        for (int i=0;i<k;i++) {
            if ( songuyento(n - a[i]) ) {
                cout<< a[i] << " " << n - a[i];
                ok = 1;
                break;
            }
        }
        if (!ok) cout<<-1;
        cout<<endl;
    }
}