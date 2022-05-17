#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {   
        int k;
        string s;
        cin >> k >> s;
        for (int i=0;i<s.size(); i++)
        {
            char Max = s[s.size()-1];
            int vt = s.size()-1;
            for (int j=s.size()-1;j>i && k>0;j-- )
            {
                if (Max < s[j] ) {
                    Max = s[j];
                    vt = j ;
                }
            } 
            if (Max > s[i] && k> 0 ) {
                swap (s[i],s[vt]);
                k--;
            }
        }
        cout << s <<endl;
    }
}