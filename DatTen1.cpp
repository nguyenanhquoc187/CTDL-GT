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
    int n, k;
    cin >> n >> k;
    string s[n],x;
    set<string> set;
    int a[n];
    for (int i=0;i<n;i++) {
        cin >> x;
        set.insert(x);
    }
    int j=1;
    for (auto i:set) {
        s[j] = i;
        j++;
    }
    n = set.size();
    for (int i=0;i<n; i++ ) a[i] = i+1;
    for (int i=0;i<k;i++) cout<< s[a[i] ] <<" ";
    cout<<endl;
    while (next_combination(a,n,k) ) {
        for (int i=0;i<k;i++) cout<< s[a[i] ] <<" ";
        cout<<endl;
    }
}