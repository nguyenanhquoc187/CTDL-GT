#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int n;
        cin >> n;
        int a[n+5],b[n+5] ;
        memset(b,-1,sizeof(b));
        stack<int> st;
        for (int i=0 ; i< n; i++) cin >> a[i];
        for (int i=0 ; i< n; i++) {
            while (!st.empty() && a[i] > a[st.top() ] ) {
                b[st.top() ] = a[i] ;    // lưu phần tử bên phải lơn hơn đầu tiên
                st.pop();
            } 
            st.push(i);
        }
        for (int i= 0 ; i < n ; i++) cout << b[i] << " ";
        cout << endl;
    }
}