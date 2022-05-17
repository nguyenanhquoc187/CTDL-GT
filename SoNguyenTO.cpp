#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int a[100001],b[10001] ;
void sangnguyento(int x) {
    for (int i=1;i<=x;i++) a[i] = 1;
    for (int i=2;i<=x;i++) {
        for (int j=2*i;j<=x;j+=i) a[j] = 0; 
    }
}
int n,s,p, dem;
void in() {
    for (int i=1;i<=n;i++) cout<<b[i] <<" ";
    cout<<endl;
}
void Trydem(int i, int p, int sum) {
    for (int j=p+1;j<=s;j++) {
        if (sum == s && i == n +1) {
            dem++;
            return;
        } 
        else if (a[j] == 1 && sum + j <= s) {
            b[i] = j;
            Trydem(i+1, j , sum + j); 
        }
    }
}
void Try(int i, int p, int sum) {
    for (int j=p+1;j<=s;j++) {
        if (sum == s && i == n +1) {
            in();
            return;
        } 
        else if (a[j] == 1 && sum + j <= s) {
            b[i] = j;
            Try(i+1, j , sum + j); 
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sangnguyento(300);
    int t; cin >> t;
    while (t--) { 
        dem = 0;
        cin >> n >> p >> s;
        Trydem(1,p,0);
        cout<<dem<<endl;
        Try(1,p,0);
    }
}