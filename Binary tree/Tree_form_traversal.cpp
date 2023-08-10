#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* rchild;
    node* lchild;
    //fucntion call
    node(){};
    node(int data);
}

//Scope resolution
node::node(int data){

    //declare the node for the tree
    lchild = nullptr;
    this->data   = data;
    rchild = nullptr

}

class Tree{
    private:
    node* root;

    public:
    Tree();

     Node* generateFromTraversal(int inorder[], int preorder[], int inStart, int inEnd);
}


Tree::Tree{
    root = nullptr;
}