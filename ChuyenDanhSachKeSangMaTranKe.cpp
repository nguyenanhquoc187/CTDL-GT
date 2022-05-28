#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n+1][n+1] ={0};
    cin.ignore();
    for (int i=1;i<=n;i++) {
        string s;
        getline(cin,s);
        int k;
        for (int j=0;j<s.size();j++) {
             k =j ;
            int ok = 0,x=0;
            while (s[j] >='0' && s[j] <='9') { //đề bịp có đỉnh 0 mà đỉnh chạy từ 1
                x = x*10 + s[j] -'0';
                j++;
                ok = 1;
            }
            if (ok) a[i][x] = 1;
        }
    }
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
}