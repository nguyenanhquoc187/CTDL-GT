#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    queue<int> q;
    while (t--) {
        string s;
        int x;
        cin >> s;
        if (s == "PUSH" ) cin >> x, q.push(x) ;
        else if (s == "POP" && !q.empty() ) q.pop();
        else if (s == "PRINTFRONT")  {
            if ( q.size() ) cout<<q.front(); else cout<<"NONE";
        }
        cout<<endl;
    }
}