#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,x;
    cin >> t;
    deque<int> d;
    while (t--) {
        string s;
        cin >> s;
        if ( s == "PUSHFRONT") {
            cin >> x;
            d.push_front(x);
        }
        if ( s == "PUSHBACK") {
            cin >> x;
            d.push_back(x);
        }
        if (s== "PRINTFRONT") if (d.size() != 0) cout<<d.front()<<endl; else cout<<"NONE"<<endl;
        if (s=="POPFRONT" && d.size()!=0  ) d.pop_front();
        if (s== "PRINTBACK") if (d.size() != 0) cout<<d.back()<<endl; else cout<<"NONE"<<endl;
        if (s== "POPBACK" && d.size()!=0 ) d.pop_back();
    }
}