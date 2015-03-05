// http://lintcode.com/en/problem/insert-node-in-a-binary-search-tree/


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
     * @param root: The root of the binary search tree.
     * @param node: insert this node into the binary search tree
     * @return: The root of the new binary search tree.
     */
    TreeNode* insertNode(TreeNode* root, TreeNode* node) {
        // write your code here
        if(root==NULL) return node;
        TreeNode* ans=root;
        while(root!=NULL)
        {
            if(root->left==NULL && root->val>node->val)
            {
                root->left=node;
                break;
            }
            if(root->right==NULL && root->val<node->val)
            {
                root->right=node;
                break;
            }
            if(root->val<node->val) root=root->right;
            else root=root->left;
        }
        return ans;
    }
};
