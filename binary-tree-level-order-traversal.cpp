// http://lintcode.com/en/problem/binary-tree-level-order-traversal/


/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
 
 
class Solution {
    /**
     * @param root: The root of binary tree.
     * @return: Level order a list of lists of integer
     */
public:
    vector<vector<int>> ans;
    void solve(TreeNode* root)
    {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<TreeNode*> inp;
            while(!q.empty())
            {
                TreeNode* tree=q.front();
                q.pop();
                inp.push_back(tree);
            }
            vector<int> t;
            for(int i=0;i<inp.size();i++)
                t.push_back(inp[i]->val);
            ans.push_back(t);
            for(int i=0;i<inp.size();i++)
            {
                if(inp[i]->left!=NULL) q.push(inp[i]->left);
                if(inp[i]->right!=NULL) q.push(inp[i]->right);
            }
        }
        return ;
    }
    vector<vector<int>> levelOrder(TreeNode *root) {
        // write your code here
        if(root==NULL) return ans;
        solve(root);
        return ans;
    }
};

