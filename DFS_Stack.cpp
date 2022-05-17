#include<bits/stdc++.h>
using namespace std;
class graph {
    int n,a[100][100],chuaxet[100];
public:
    void input() ;
    void itit() ;
    void dfs(int u);
};
void graph::input() {
    cin >> n;
    for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) cin >> a[i][j];
}
void graph::itit() {
    for (int i=1;i<=n;i++) chuaxet[i] = 1;
}
void graph::dfs(int u) {
    stack<int> st;
    st.push(u);
    cout<<u<<" ";
    chuaxet[u] = 0;
    while (st.size() != 0) {
        int s =  st.top();
        st.pop();
        for (int i=1;i<=n;i++) {
            if (a[s][i] == 1 && chuaxet[i] == 1) {
                cout<<i<<" ";
                chuaxet[i] = 0;
                st.push(s);
                st.push(i);
                break;
            }
        }
    }
}
int main() {
    graph g; g.input() ; g.itit() ; g.dfs(1);
}