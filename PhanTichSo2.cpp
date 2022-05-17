#include <bits/stdc++.h>
using namespace std;
int n,a[100] , b[10] = {1,2,3,5,7,11,15,22,30,42};
void in(int i) {
    cout<<"(";
    for (int j=0;j<i;j++) cout<<a[j]<<" ";
    cout<<a[i]<<") ";
}
void Try(int i, int index, int s) {
    for (int j = index; j>= 1 ;j--) {
        a[i] = j;
        if ( s+ j == n) {
            in(i);
        }
        else if (s+j < n) Try(i+1, j, s+j);
    }
}
int main() {
    int t; cin >> t;
    while (t--) { 
        cin >> n;
        cout<<b[n-1]<<endl;
        Try(0,n,0);
        cout<<endl;
    }
}