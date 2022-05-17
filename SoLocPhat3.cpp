#include <bits/stdc++.h>
using namespace std;
long long dem ;
vector<unsigned long long> v;

void in(long long a[], long long n) {
    unsigned long long x=0;
    for (long long i=0;i<n;i++) x= x*10 + a[i];
    v.push_back(x);
    dem++;
}
void locphat(long long i, long long a[], long long n) {
    for (long long j = 8 ; j>=6;j-=2) {
        a[i] = j;
        if (i == n -1) in(a,n); else  locphat(i+1,a,n);
    }
    
}
bool cmp(long long a, long long b) {return a > b;}
int main () {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    long long t;
    cin >> t;
    while (t--) {
        dem = 0;
        long long n;
        cin >> n;
        long long a[n];
        for (long long i=1;i<=n;i++) locphat(0,a,i);
        cout<<dem<<endl;
        sort(v.begin(),v.end(),cmp);
        for(auto it:v) cout<<it<<" ";
        v.clear();
        cout<<endl;
    }
}