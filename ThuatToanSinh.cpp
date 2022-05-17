#include <bits/stdc++.h>
using namespace std;
int a[55],n;
bool thuanghich() {
    for (int i=0;i<n/2;i++) {
        if (a[i] != a[n-i-1] ) return 0;
    }
    return 1;
}
void in() {
    if (thuanghich() ) {
        for (int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}
void sinh(int i) {
    for (int j=0;j<=1;j++) {
        a[i] = j;
        if (i == n - 1) in(); else sinh(i+1);
    }
}
int main () {
    cin >> n;
    sinh(0);
}