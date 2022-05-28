#include <bits/stdc++.h>
using namespace std;
struct tNope {
    int key;
    tNope *pleft;
    tNope *pRight;
};
tNope* CreateNope (int x) {
    tNope *p = new tNope;
    p->key = x;
    p->pleft = NULL;
    p->pRight = NULL;
    return p;
}
typedef tNope* Tree;
void Create_tree(Tree &T) {
    tNope *p;
    p = CreateNope(9);
}
int main () {
    Tree T;

    Create_tree(T);
}
    