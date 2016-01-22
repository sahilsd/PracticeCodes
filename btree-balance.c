    bool isBalanced(TreeNode* root) {
        int lh, rh;
        if(!root) return true;
        lh = getHeight(root->left);
        rh = getHeight(root->right);
         
        if(std::abs(lh-rh) > 1) return false;
         
        return isBalanced(root->left) && isBalanced(root->right);
    }
     
    int getHeight(TreeNode *root) {
        if(!root) return 0;
         
        return 1+max(getHeight(root->left), getHeight(root->right));
    }
