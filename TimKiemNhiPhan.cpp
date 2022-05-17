#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int Binary_search(int a[], int n, int k) {
    int r = n-1, l =0;
    while (r >= l) {
        int mid = l + (r-l)/2;
        if (a[mid] == k) return mid+1;
        if (a[mid ] > k) r = mid - 1;
        if (a[mid] < k) l = mid + 1;
    }
    return -1;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        int index = Binary_search(a,n,k);
        if (index != -1) cout<<index; else cout<<"NO";
        cout<<endl;
    }
}