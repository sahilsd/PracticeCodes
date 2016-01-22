vector<TreeNode> postorder(TreeNode* root)
{
        stack<pair<TreeNode*, bool>> s;
        vector<TreeNode*> post;
         pair<TreeNode*, bool> *temp;

         s.push(make_pair(root, false));
         while(!s.empty()) {
             temp = &s.top();
            if(!temp->second) {
                 temp->second = true;
                 if(temp->first->right != NULL)
                     s.push(temp->first->right);
                 if(temp->first->left != NULL) 
                     s.push(temp->first->left)
             else {
                 post.push_back(temp->first);
                 s.pop();
             }
         }
}

