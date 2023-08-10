#include<iostream>
using namespace std;

struct Node{
    int data;
    node* left;
    node* right;
}

int countLeaves(Node* root){
    if(root == NULL)
    {
        return 0;
    }
    if(root->left ==NULL && root->right++NULL){
        return 1;

    }
    else{
        return countLeaves(root->left)+countLeaves*(toor->right);
    }
}