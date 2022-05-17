#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >> n >> k;
    int a[n], b[n];
    for (int i=0;i<n;i++) cin >> a[i];
    set<int> s(a,a+n);
    int j=0;
    n = s.size();
    for (auto i:s ) a[j++] = i;
    for (int i=0;i<k;i++)  b[i] = i+1;
    for (int i=0;i<k;i++) cout<<a[i] << " ";
    cout<<endl;
    while (next_combination(b,n,k) ) {
        for (int i=0;i<k;i++) cout<<a[ b[i] - 1] <<" ";
        cout<<endl;
    }
}