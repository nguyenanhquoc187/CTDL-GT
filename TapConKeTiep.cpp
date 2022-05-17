#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        int a[k+1];
        for (int i=0;i<k;i++) cin >> a[i];
        int index = -1;
        for (int i=k-1;i>=0;i--) {
            if ( a[i] != n - k + i + 1) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            for (int i=0;i<k;i++) cout<<i+1<<" ";
            cout<<endl;
        } else {
            a[index]++;
            for (int i=index+1;i<k;i++)  a[i]= a[index] + i - index ;
            for (int i=0;i<k;i++) cout<< a[i] <<" ";
            cout << endl;
        }
    }
}