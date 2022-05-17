#include<bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	Node *left,*right;
};
typedef struct Node* Tree;
Tree createNode(int x) {
	Node *p = new Node;
	p->data = x;
	p->right = p->left = NULL;
	return p;
}
void addNode(Tree &T, int x) {
	if (T == NULL) T = createNode(x);
	else {
		if (x > T->data ) addNode(T->right,x);
		else addNode(T->left,x);
	}
}
void order(Tree T) {
	if (T->left == NULL && T->right == NULL) cout << T->data << " ";
	else {
		if (T->left != NULL) order(T->left);
		if (T->right != NULL) order(T->right);
	}
}
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		Tree root = NULL;
		for (int i = 0 ; i< n ;i++) {
			int x;
			cin >> x;
			addNode(root,x);
		}
		order(root);
		cout << endl;
	}
}
