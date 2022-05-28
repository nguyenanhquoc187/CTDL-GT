#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        queue<int> q;
        int n;
        cin >> n;
        while(n--) {
            int x,y;
            cin >> x;
            if (x==1) cout<<q.size();
            else if (x==2 ) {
                if (q.empty()) cout<<"YES"; else cout<<"NO";
            }
            else if (x==3) {
                cin >> x;
                q.push(x);
            }
            else if (x==4 ) {
                if (!q.empty()) q.pop();
            }
            else if (x==5) {
                if (!q.empty()) cout<<q.front(); else cout<<-1;
            }
            else if (x==6) {
                if (!q.empty()) cout<<q.back(); else cout<<-1;
            }
                cout<<endl;
        }
    }
}