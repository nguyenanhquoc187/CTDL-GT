#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m, n, i, j, k;
    long long a[5000];
    cin >> m;
    while (m--)
    {
        int check = 0;
        cin >> n;
        for (i = 0; i < n; ++i)
            cin >> a[i];
        sort(a,a+n,::greater<long long>());
        for (i = 0; i < n; ++i) {
            for (j = i + 1; j < n; ++j)
            {
                long long h = a[i] * a[i] - a[j] * a[j];
                long long p = (long long)sqrt(a[i] * a[i] - a[j] * a[j]);
                if (p * p == h)
                {
                    for (k = j + 1; k < n; ++k)
                        if (h == a[k] * a[k])
                        {
                            ++check;
                            if (check == 1)
                                cout << "YES" << endl;
                            // break;
                        }
                }
                if (check) break;
            }
            if (check) break;
        }
        if (check == 0)
            cout << "NO" << endl;
    }
}