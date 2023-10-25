#include<iostream>
using namespace std;
int Tree::Height(Node *p) {
    int l = 0;
    int r = 0;
 
    if (p != nullptr){
        l = Height(p->lchild);
        r = Height(p->rchild);
        if (l > r){
            return l + 1;
        } else {
            return r + 1;
        }
    }
    return 0;
}
bool isBalanced(node* root){
    if(root==nullptr){
        return true;
    }

    bool left = isBalanced(root->left);
    bool right=isBalanced(root->right);

    bool diff = abs(height(root->left)-height(root->right))<=1;
if(left && right && diff){
    return true;
}
else{
  return false;
}
}
int main()
{
    return 0;
}