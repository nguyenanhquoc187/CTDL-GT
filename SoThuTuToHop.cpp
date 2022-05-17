#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool check(int a[], int n, int b[]) {
    for (int i=0;i<n;i++) if(a[i]!= b[i]) return 0;
    return 1;
}
bool next_combination(int a[], int n, int k) {
    int index =-1;
    for (int i= k -1;i>=0;i--) {
        if (a[i] != n-k+i+1) {
            index= i ;
            break;
        }
    }
    if (index == -1) return 0; else {
        a[index]++;
        for (int i=index+1;i<k;i++)  a[i]= a[index] + i - index ;
        return 1;
    }
}   
int main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        int a[n],b[n], dem = 1;
        for (int i=0;i<k;i++) {
            cin >> a[i];
            b[i] = i+1;
            // cout<<b[i]<<" ";
        }
        while (!check(a,k,b) ) {
            dem++;
          next_combination(b,n,k);
        }
        // for (int i=0;i<k;i++) cout<<b[i] <<" ";
        cout<<dem<<endl;
    }
}