#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) { 
        int k,  c[26] = {0};
        cin >> k;
        string s;
        cin >> s;
        for (int i =0 ; i < s.size() ; i++)  c[s[i] - 'A']++;
        // for (int i = 0 ; i < s.size() ; i++) cout << c[s[i] - 'A'] << " ";
        priority_queue<int> pq;
        for (int i = 0 ; i < 26 ; i++)  pq.push(c[i]);
        while (k != 0 ) {
            int x = pq.top();
            pq.pop();
            x--; k--;
            pq.push(x);
        }
        long long sum = 0;
        while (!pq.empty() ) {
            sum = sum + pq.top()*pq.top();
            pq.pop();
        }
        cout << sum << endl;
    }
}