#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int n;
        cin >> n;
        queue<long long > q;
        q.push(9);
        while(1) {
            long long x = q.front();
            q.pop();
            if (x%n == 0) {
                cout << x ; break;
            }
            q.push(x*10); q.push(x*10 + 9);
        }
        cout<<endl;
    }
}