#include<bits/stdc++.h>
using namespace std;
int chuaxet[100], a[100][100], n , truoc[100] ;
void DFS(int u) {
    for (int i=1;i<=n;i++) {
        chuaxet[i] = 1;
        truoc[i] = 0;
    }
    stack<int> st;
    st.push(u);
    chuaxet[u] = 0;
    while (st.size()!= 0) {
        int s = st.top();
        st.pop();
        for (int i=1;i<=n;i++) {
            if (a[s][i] && chuaxet[i] ) {
                st.push(s);
                st.push(i);
                chuaxet[i]= 0;
                truoc[i] = s;
                break;
            }
        }
    }
}
void BFS(int u) {
    for (int i=1;i<=n;i++) {
        chuaxet[i] = 1;
        truoc[i] = 0;
    }
    queue<int> q;
    q.push(u);
    chuaxet[u] = 0;
    while (q.size()!=0) {
        int s = q.front();
        q.pop();
        for (int i=1;i<=n;i++) {
            if (a[s][i] && chuaxet[i] ){
                q.push(i);
                chuaxet[i] = 0;
                truoc[i] = s;
            }
        }
    }
}
void duong_di(int s, int t, int choose) {
    if (choose) DFS(s); else BFS(s);
    if (truoc[t] == 0) cout<<"no path";
    else {
        if (choose) cout<<"DFS path: "; else cout<<"BFS path: ";
        cout<<t<<" ";
        int u = truoc[t];
        while ( u != s) {
            cout<<u<<" ";
            u = truoc[u];
        }
        cout<<s;
    }
    
}
int main () {
    cin >> n;
    int s,t;
    cin >> s >> t;
    for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) cin >> a[i][j];
    duong_di(s,t,1);
    cout<<endl;
    duong_di(s,t,0);
}