#include <bits/stdc++.h>
using namespace std;
int main () {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<n-1;i++) {
        int k=i;
        for (int j=i+1;j<n;j++) {
            if (a[j] < a[k]) {
                k = j;
            }
        }
        swap(a[i],a[k]);
        cout<<"Buoc "<<i+1<<": ";
        for (int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}