#include<bits/stdc++.h>
using namespace std;
vector<int> ce;
stack<int> st;
int a[100][100],n,u, check = 0;
void Euler_cycle(int u) {
    st.push(u);
    while (st.size() != 0) {
        int s = st.top();
        check = 0;
        for (int i=1;i<=n;i++) {
            if ( a[s][i] ) {
                st.push(i);
                a[s][i] = 0;
                a[i][s] = 0;
                check = 1;
                break;
            }
        }
        if (!check) {
            ce.push_back(s);
            st.pop();
        }
    }
    for (int i = ce.size() - 1;i>=0;i--) cout<<ce[i]<<" ";
}
int main () {
    cin >> n >> u;
    for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) cin >> a[i][j];
    Euler_cycle(u);
}