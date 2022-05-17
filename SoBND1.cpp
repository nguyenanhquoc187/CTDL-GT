#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        long long n;
        cin >> n;
        queue<long long> q;
        q.push(1);
        long long dem = 0;
        while (1) {
            long long k = q.front();
            q.pop();
            if (k < n) dem++; else break;
            q.push(k*10); q.push(k*10 +1);
        }
        cout<<dem<<endl;
    }
}