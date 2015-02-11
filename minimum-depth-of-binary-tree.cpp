// http://lintcode.com/zh-cn/problem/minimum-depth-of-binary-tree/


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
    void dfs(TreeNode *root, int deep)
    {
        if(root->left == NULL && root -> right == NULL) 
        {
            if(deep < ans) ans = deep;
            return ;
        }
        if(root->left != NULL) dfs(root->left, deep + 1);
        if(root->right != NULL) dfs(root->right, deep + 1);
    }
    int minDepth(TreeNode *root) {
        // write your code here
        ans = 0x7fffffff;
        if(root == NULL) return 0;
        dfs(root, 1);
        return ans;
    }
};
