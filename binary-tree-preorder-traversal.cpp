// http://lintcode.com/zh-cn/problem/binary-tree-preorder-traversal/


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
    vector<int> ans;
public:
    /**
     * @param root: The root of binary tree.
     * @return: Preorder in vector which contains node values.
     */
    void dfs(TreeNode *root)
    {
        if(root==NULL) return;
        ans.push_back(root->val);
        if(root->left!=NULL) dfs(root->left);
        if(root->right!=NULL) dfs(root->right);
    }
    vector<int> preorderTraversal(TreeNode *root) {
        // write your code here
        ans.clear();
        dfs(root);
        return ans;
    }
};

