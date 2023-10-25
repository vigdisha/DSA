//diameter of bt=max(height(left),height(right))+1s
//using DP

#include<iostream>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}
int height(node* root){
if(root==nullptr){
    return 0;

}

if(root!= nullptr){
    int lefth = heigth(root->left);
    int righth = height(root->right);
}

return max(lefth, righth)+1;

}

int diameter(node* root){
if(root==nullptr){
    return 0;

}
    
    
    int ld = diameter(root->left);
    int rd = diameter(root->right)
   
    int lh=height(root->left);
    int rh=height(root->right);

    return  max(lh + rh + 1, max(ld ,rd));
    }


int main()
{
    return 0;
}