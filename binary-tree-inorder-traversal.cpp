// http://lintcode.com/zh-cn/problem/binary-tree-inorder-traversal/


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
     * @return: Inorder in vector which contains node values.
     */
    vector<int> ans;
public:
    void dfs(TreeNode *root)
    {
        if(root==NULL) return;
        if(root->left!=NULL) dfs(root->left);
        ans.push_back(root->val);
        if(root->right!=NULL) dfs(root->right);
    }
    vector<int> inorderTraversal(TreeNode *root) {
        // write your code here
        ans.clear();
        dfs(root);
        return ans;
    }
};
