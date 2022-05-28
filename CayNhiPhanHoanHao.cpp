#include<bits/stdc++.h>
using namespace std;
struct data {
	int u,v ;
	char c;
};
bool cmp(data a, data b) {
	if (a.u == b.u ) return a.v < b.v;
	return a.u < b.u; 
}
struct Nope {
	int data;
	Nope *left, *right;
};
typedef Nope *Tree;
Tree CreateNope(int x) {
	Nope *p = new Nope;
	p->data = x;
	p->left = p ->right = NULL;
	return p;
}
void CreateTree(Tree &root) {
	root = NULL;
}
set<int> s;
void duyet(Tree T, int count ) {
    if (T != NULL ) {
        if (T->left == NULL && T->right == NULL) s.insert(count);
        duyet(T->left, count+1);
        duyet(T->right, count+1);
    }
}
int main () {
	int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Tree T;
        CreateTree(T);
        unordered_map<int,Tree> m;
		data a[n+5];
        for (int i = 0 ; i< n ;i++) {
            int u ,v;
            char c;
            cin >> u >> v >> c;
			a[i].u = u; a[i].v = v; a[i].c = c;
            if ( i == 0) {
                T = CreateNope(u);
                m[u] = T;
            }
            if (c == 'L') {
                m[v] = CreateNope(v);
                m[u]->left = m[v];
            } 
            else {
                m[v] = CreateNope(v);
                m[u]->right = m[v];
            }
        }
        duyet(T,0);
		sort(a,a+n,cmp);
		bool ok = 1;
		for (int i = 0 ; i < n ; i+=2) {
			if (a[i].u != a[i+1].u) {
				ok = 0; break;
			}
		}
        if (ok && s.size() == 1) cout << "Yes"; else cout << "No";
		cout << endl;
        free(T);
        s.clear();
    }
}