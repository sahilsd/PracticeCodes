vector<TreeNode> inorderTraversal(TreeNode root)
{
        vector<TreeNode> inorder;

        stack<TreeNode> s;
        s.push(root);
        TreeNode temp = s.top();
        s.pop();

        while(1) {
            while(temp != NULL) {
                s.push(temp);
                temp = temp.left;
            }
            if(s.empty())    
                break;
            temp = s.top();
            s.pop();
            inorder.push_back(temp);
            temp = temp.right;
        }
        return inorder;
}

