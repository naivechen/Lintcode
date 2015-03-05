// http://lintcode.com/en/problem/binary-tree-level-order-traversal-ii/


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
     * @param root : The root of binary tree.
     * @return : buttom-up level order a list of lists of integer
     */
public:
    vector<vector<int>> ans;
    vector<vector<int>> ret;
    void solve(TreeNode *root)
    {
        queue<TreeNode*> q;
        //初始化先放入根结点到队列中, 为第一层结点
        q.push(root);
        //这里采取一层层的方式加入到队列中
        while(!q.empty())
        {
            vector<TreeNode*> inp;
            while(!q.empty())
            {
                TreeNode *tree=q.front();
                q.pop();
                inp.push_back(tree);
            }
            vector<int> t;
            for(int i=0;i<inp.size();i++)
                t.push_back(inp[i]->val);
            ans.push_back(t);
            for(int i=0;i<inp.size();i++)
            {
                TreeNode* node=inp[i];
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
            }
        }
        for(int i=ans.size()-1;i>=0;i--)
            ret.push_back(ans[i]);
        return ;
    }
    vector<vector<int>> levelOrderButtom(TreeNode *root) {
        // write your code here
        if(root==NULL) return ans;
        solve(root);
        return ret;
    }
};
