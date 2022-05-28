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
void preOrder(Tree T) {
	if (T!= NULL) {
		cout << T->data << " ";
		preOrder(T->left);
		preOrder(T->right);
	}
}
void Try(Tree &T, int a[],int n) {
	int k = (n-1)/2;
	addNode(T,a[k]);
	if ( k!= n-1) Try(T, a+k+1,n - k - 1);
	if (k != 0) Try(T, a,k);
}
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		Tree root = NULL;
		int a[n+5];
		for (int i = 0 ; i< n ;i++) cin >> a[i];
		sort(a,a+n);
		Try(root, a,n);
		preOrder(root);
		cout << endl;
	}
}
