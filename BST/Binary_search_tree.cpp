#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *lchild;
    struct Node *rchild;
} *root = NULL;

void Insert(int key) {
    //temporary vars
    struct Node *t = root;
    struct Node *r = NULL;
    struct Node *p;

    if (root == NULL) {
        p = new Node;  // Allocate memory using 'new' in C++
        //root node
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;
    }
    while (t != NULL) {
        //children:
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
        r->lchild = p//left side smaller 
        //right side larger
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




//recursive call

//1)create a fucntion to crate a node\

struct Node* newnode(int item){
    Node *temp = new Node;
    temp->data = item;
    temp->left,temp->right= nullptr;
    return temp; 
}

struct Node* insert(Node *root, int key){
    if(node==nullptr){
        return newnode(key);
    }
    
    if(key<node->data){
        node->left=insert(node->left, key);
    }
    else if(key>node->data){
        node->right = insert(node->right, key);
    }
    
    return node;
}