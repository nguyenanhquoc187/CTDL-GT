#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        long long s1 = 0, s2 = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i < n; i += 2)
            s1 = s1 * 10 + a[i];
        for (int i = 1; i < n; i += 2)
            s2 = s2 * 10 + a[i];
        cout << s1 + s2 << endl;
    }
}