#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int dem = 0;
        stack<int> s;
        s.push(-1);
        string X;
        cin >> X;
        for (int i = 0; i < X.size(); i++)
        {
            if (X[i] == '(')
            {
                s.push(i);
            }
            else
            {
                s.pop();
                if (s.size() > 0) dem = max(dem, i - s.top() );

                if (s.size() == 0)
                    s.push(i);
            }
        }
        cout << dem << endl;
    }
    return 0;
}