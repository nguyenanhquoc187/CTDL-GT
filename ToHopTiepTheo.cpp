#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        int a[k+1],b[k];
        for (int i=0;i<k;i++) {
            cin >> b[i];
            a[i] = b[i];
        }
        int index = -1, dem = 0;
        for (int i=k-1;i>=0;i--) {
            if ( a[i] != n - k + i + 1) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            cout<<k<<endl;
        } else {
            a[index]++;
            for (int i=index+1;i<k;i++)  a[i]= a[index] + i - index ;
            for (int i=0;i<k;i++) {
                for (int j=0;j<k;j++) {
                    if (a[i] == b[j] ) {
                        dem++;
                        break;
                    }
                }
            }
            cout <<k - dem << endl;
        }
    }
}