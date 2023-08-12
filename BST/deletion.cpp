#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *lchild;
    struct Node *rchild;
} *root = NULL;

void Inorder(struct Node *p) {
    if (p != NULL) {
        Inorder(p->lchild);
        cout << p->data << " ";
        Inorder(p->rchild);
    }
}

struct Node *Rinsert(struct Node *p, int key) {
    struct Node *t = NULL;
    if (p == NULL) {
        t = new Node;
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if (key < p->data) {
        p->lchild = Rinsert(p->lchild, key); // Recursive call
    } else if (key > p->data) {
        p->rchild = Rinsert(p->rchild, key); // Recursive call
    }

    return p;
}

struct Node *FindMin(struct Node *node) {
    //to find the sucessor or predecessor in the tree
    while (node->lchild != NULL) {
        node = node->lchild;
    }
    return node;
}

struct Node *Delete(struct Node *root, int key) {
    if (root == NULL) {
        return root;
    } else if (key < root->data) {
        root->lchild = Delete(root->lchild, key);
    } else if (key > root->data) {
        root->rchild = Delete(root->rchild, key);
    } else {
        // Node with only one child or no child
        if (root->lchild == NULL) {
            struct Node *temp = root->rchild;
            delete root;
            return temp;
        } else if (root->rchild == NULL) {
            struct Node *temp = root->lchild;
            delete root;
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        struct Node *temp = FindMin(root->rchild);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->rchild = Delete(root->rchild, temp->data);
    }
    return root;
}

int main() {
    root = Rinsert(root, 10);
    Rinsert(root, 5);
    Rinsert(root, 20);
    Rinsert(root, 8);
    Rinsert(root, 30);

    cout << "Inorder before deletion: ";
    Inorder(root);
    cout << endl;

    root = Delete(root, 10);

    cout << "Inorder after deletion: ";
    Inorder(root);
    cout << endl;

    return 0;
}