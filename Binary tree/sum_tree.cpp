//sum of respective leftsubtree+rightsubtree==every node
class solution{
public:
pair<bool,int> isSum(node* root){
    if(root==nullptr){
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

    if(root->left && root->right==nullptr){
             pair<bool, int> p = make_pair(true, root->data);
             return p;
    }

 pair<bool, int> leftAns = make_pair(true, 0);

    
    
    
    
    
    
    
    
    }
bool isSumTree(node *root){
}

};
