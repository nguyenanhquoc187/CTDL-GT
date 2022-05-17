#include<bits/stdc++.h>
using namespace std;
int n,a[100][100], u , chuaxet[100] ;
void BFS_tree(int u) {
    for (int i=1;i<=n;i++) chuaxet[i] = 1;
    queue<int> q;
    q.push(u);
    chuaxet[u] = 0;
    while (q.size() != 0) {
        int s = q.front() ; q.pop();
        for (int i=1;i<=n;i++) {
            if (a[s][i] && chuaxet[i] ) {
                if (s < i) cout<<s << " " << i <<endl; else cout<< i << " " << s <<endl;
                q.push(i);
                chuaxet[i] = 0;
            }
        }
    }
}
void DFS_tree(int u) {  
    for (int i=1;i<=n;i++) chuaxet[i] = 1;
    stack<int> st;
    st.push(u);
    chuaxet[u] = 0;
    while (st.size() != 0) {
        int s = st.top(); st.pop();
        for (int i=1;i<=n;i++) {
            if ( a[s][i] && chuaxet[i] ) {
                if (s < i) cout<<s << " " << i <<endl; else cout<< i << " " << s <<endl;
                st.push(s); st.push(i);
                chuaxet[i] = 0;
                break;
            }   
        }
    }
}
int main () {
    cin >> n >> u;
    for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) cin >> a[i][j];
    for (int i=1;i<=n;i++) chuaxet[i] = 0;
    cout<<"DFS tree\n"; DFS_tree(u); 
    cout<<"BFS tree\n"; BFS_tree(u);
}