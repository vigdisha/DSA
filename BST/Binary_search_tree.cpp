#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *lchild;
    struct Node *rchild;
} *root = NULL;

void Insert(int key) {
    struct Node *t = root;
    struct Node *r = NULL;
    struct Node *p;

    if (root == NULL) {
        p = new Node;  // Allocate memory using 'new' in C++
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;
    }
    while (t != NULL) {
        r = t;
        if (key < t->data) {
            t = t->lchild;
        } else if (key > t->data) {
            t = t->rchild;
        } else {
            return;
        }
    }

    // New node for the new insertion
    p = new Node;  // Allocate memory using 'new' in C++
    p->data = key;
    p->lchild = p->rchild = NULL;
    if (key < r->data) {
        r->lchild = p;
    } else {
        r->rchild = p;
    }
}

void Inorder(struct Node *p) {
    if (p != NULL) {
        Inorder(p->lchild);
        cout << p->data << " ";
        Inorder(p->rchild);
    }
}

int main() {
    Insert(10);
    Insert(5);
    Insert(20);
    Insert(8);
    Insert(30);

    Inorder(root);
    cout << endl;
    return 0;
}
