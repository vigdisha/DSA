class solution{
    public:
    bool isIdnetical(node* root1,node* root2){
        if(root1==nullptr && root2==nullptr){
            return true;

        }
        if(root1!=nullptr &&root2==nullptr){
                return false;
        }
        if(root1==nullptr&&root2!=nullptr){
            return flase;

        }

        //check left and right

        bool left = isIdnetical(root1->left, root2->left);
        bool right = isIdnetical(root1->right,root2->right);

        bool value = root1->data==root2->data;

        if(value && left && right){
            return true;
        }
        else{
            return false;
        }
    }
};