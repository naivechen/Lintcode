// http://lintcode.com/en/problem/binary-tree-zigzag-level-order-traversal/


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
     * @return: A list of lists of integer include 
     *          the zigzag level order traversal of its nodes' values 
     */
public:
    vector<vector<int>> ans;
    void solve(TreeNode* root)
    {
        queue<TreeNode*> q;
        q.push(root);
        int flag=1;
        while(!q.empty())
        {
            vector<TreeNode*> inp;
            while(!q.empty())
            {
                inp.push_back(q.front());
                q.pop();
            }
            vector<int> t;
            if(flag)
            {
                for(int i=0;i<inp.size();i++)
                    t.push_back(inp[i]->val);
            }
            else 
            {
                for(int i=inp.size()-1;i>=0;i--)
                    t.push_back(inp[i]->val);   
            }
            ans.push_back(t);
            for(int i=0;i<inp.size();i++)
            {
                if(inp[i]->left!=NULL) q.push(inp[i]->left);
                if(inp[i]->right!=NULL) q.push(inp[i]->right);
            }
            flag^=1;
        }
        return ;
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
        // write your code here
        if(root==NULL) return ans;
        solve(root);
        return ans;
    }
};
