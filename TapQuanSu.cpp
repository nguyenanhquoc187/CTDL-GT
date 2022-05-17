#include <bits/stdc++.h>
using namespace std;
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
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        int a[k];
        set<int> s;
        for (int i=0;i<k;i++) {
            cin >> a[i];
            s.insert(a[i]);
        }
        bool check = next_combination(a,n,k);
        int dem = 0;
        if (!check ) cout<<k; else {
            int size = s.size() ;
            for (int i=0;i<k;i++) s.insert(a[i]);
            cout<<s.size() - size;
        }
        cout<<endl;
    }
}