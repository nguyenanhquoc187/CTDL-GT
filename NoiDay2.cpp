#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
long long mod = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        long long s = 0;
        priority_queue<int, vector<int>, greater<int>> q;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            q.push(x);
        }
        while (q.size() > 1)
        {
            int s1 = q.top();
            q.pop();
            int s2 = q.top();
            q.pop();
            int k = (s1+s2) % mod;
            s = (s+ k) % mod;
            q.push(k);
        }
        cout << s << endl;
    }
}