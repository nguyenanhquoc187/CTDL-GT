#include<bits/stdc++.h>
using namespace std;
stack<int> st;
int n,a[100][100],chuaxet[100];
void DFS(int u) {
    st.push(u);
    chuaxet[u]=0;
    while (st.size() != 0) {
        int s = st.top();
        st.pop();
        for (int i=1;i<=n;i++) {
            if (a[s][i] && chuaxet[i] ) {
                st.push(s);
                st.push(i);
                chuaxet[i] = 0;
                break;
            }
        }
    }
}
int Strongly_connected() {
    for (int i=1;i<=n;i++) chuaxet[i] = 1;
    for (int i=1;i<=n;i++) {
        DFS(i);
        for (int j=1;j<=n;j++) if (chuaxet[j]) return 0;
        for (int j=1;j<=n;j++) chuaxet[j] = 1;
    }
    return 1;
}
int main () {
    cin >> n;
    for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) cin >> a[i][j];
    for (int i=1;i<=n;i++) chuaxet[i]=1;
    if (Strongly_connected()) cout<<"strongly connected"; else cout<<"not strongly connected";
}