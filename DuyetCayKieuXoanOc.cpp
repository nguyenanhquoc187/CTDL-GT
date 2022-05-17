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
void levelOrder(Tree T) {
    queue <Tree> q;
    Tree top;
    q.push(T);
    while (q.size() ) {
        top = q.front();
        q.pop();
        cout << top->data << " ";
        if (top->left != NULL )q.push(top->left) ; 
        if (top->right != NULL) q.push(top->right);
    }
}
void spiralOrder(Tree T) {
    stack<Tree> st1,st2;
    st1.push(T);
    Tree top;
    while (st1.size() || st2.size() ) {
        while (st1.size() ) {
            top = st1.top();
            st1.pop();
            cout << top->data << " ";
            if (top->right != NULL) st2.push(top->right);
            if (top->left != NULL) st2.push(top->left);
        }
        while (st2.size() ) {
            top = st2.top();
            st2.pop();
            cout << top->data << " ";
            if (top->left != NULL) st1.push(top->left);
            if (top->right != NULL) st1.push(top->right);
        }
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
        spiralOrder(T);
        cout <<endl;
    }
}
