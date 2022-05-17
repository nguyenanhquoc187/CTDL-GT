#include<bits/stdc++.h>
using namespace std;
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
void insertNope(Tree &T, int pr, int child , char c) {      // tim kiem de them Nope vao cay
	if (T != NULL ) {
		if (T->data == pr ) {
			if (c == 'L' ) 
				T->left = CreateNope(child);
			else T->right = CreateNope(child);
		}
        insertNope(T->left, pr , child , c);
        insertNope(T->right, pr , child , c);
	}
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
        for (int i = 0 ; i < n ; i++) {
            int u, v;
            char c;
            cin >> u >> v  >> c;
            if (i == 0) T = CreateNope(u);
            insertNope(T,u,v,c);
        }
        duyet(T,0);
        if (s.size() > 1) cout << 0 ; else cout << 1;
        cout << endl;
        s.clear();
        free(T);
    }
}