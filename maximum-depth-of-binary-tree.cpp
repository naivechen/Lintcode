// http://lintcode.com/zh-cn/problem/maximum-depth-of-binary-tree/


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
public:
    /**
     * @param root: The root of binary tree.
     * @return: An integer
     */
    int ans;
    void dfs(TreeNode *root, int dep)
    {
        if(root->left==NULL && root->right==NULL)
        {
            ans=max(ans,dep);
            return;
        }
        if(root->left!=NULL) dfs(root->left, dep+1);
        if(root->right!=NULL) dfs(root->right, dep+1);
    }
    int maxDepth(TreeNode *root) {
        // write your code here
        if(root==NULL) return 0;
        ans=1;
        dfs(root,1);
        return ans;
    }
};
