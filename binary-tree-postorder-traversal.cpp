// http://lintcode.com/zh-cn/problem/binary-tree-postorder-traversal/


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
     * @return: Postorder in vector which contains node values.
     */
    vector<int> ans;
public:
    void dfs(TreeNode *root)
    {
        if(root==NULL) return;
        if(root->left!=NULL) dfs(root->left);
        if(root->right!=NULL) dfs(root->right);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode *root) {
        // write your code here
        ans.clear();
        dfs(root);
        return ans;
    }
};
