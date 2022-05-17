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
	p->left = p->right = NULL;
	return p;
}
void addNode(Tree &T, int x) {
	if (T == NULL ) T = createNode(x);
	else {
		if (x > T->data ) addNode(T->right, x); 
		else addNode(T->left, x);
	}
}
void preOrder(Tree T) {
	if (T!= NULL) {
		preOrder(T->left);
		preOrder(T->right);
		cout <<T->data << " ";
	}
}
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		Tree root;
		root = NULL;
		for (int i = 0 ;i < n ;i++) {
			int x;
			cin >> x;
			addNode(root,x);
		}
		preOrder(root);
		cout << endl;
	}
}

