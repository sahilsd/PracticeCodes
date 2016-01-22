
/*
       A 
    B     C 
 D    E           F 
    G          H
*/

//temp = A/B/D/E
//stack = C E D/CE/CE/C
//pre = A B D E

vector<TreeNode> preorder(TreeNode root)
{
        vector<TreeNode> pre;
        TreeNode temp = root;
        stack<TreeNode> s;
        s.push(s);

         while(!s.empty()) {
             temp = s.top(); 
             s.pop();    
            pre.push_back(temp); 
            if(temp.right != NULL)
                 s.push(temp.right); 
            if(temp.right != NULL)
                 s.push(temp.left); 
        }
        return pre;
}

