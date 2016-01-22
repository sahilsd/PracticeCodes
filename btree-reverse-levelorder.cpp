struct TreeNode {
         int val;
         TreeNode *left, *right;
         TreeNode(int x) : val(x), left=NULL, right=NULL { }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         int height = 0;
         stack<pair<TreeNode*,int>> s;
         vector<vector<int>> levels;
          
         if(!root) return levels;
          
         queue<pair<TreeNode*,int>> bfsQ;
          
         bfsQ.push(make_pair(root,0));
         pair<TreeNode*,int> u;
 
         while(!bfsQ.empty()) {
             u = bfsQ.front();
             bfsQ.pop();
              
             height = u.second;
             if(levels.size() <= height) levels.push_back(vector<int>());
              
             s.push(make_pair(u.first, height));
              
             if(u.first->right)  
                 bfsQ.push(make_pair(u.first->right, height+1));
             if(u.first->left)  
                 bfsQ.push(make_pair(u.first->left, height+1));
             cout<<"--"<<levels.size()<<endl;                  
        }
         
        while(!s.empty()) {
            levels[levels.size() - 1 - s.top().second].push_back(
                    s.top().first->val);
            s.pop();
        }
        return levels;
}
