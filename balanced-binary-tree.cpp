// http://lintcode.com/en/problem/balanced-binary-tree/


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
     * @return: True if this Binary tree is Balanced, or false.
     */
    int dfs(TreeNode *root)
    {
        if(root==NULL) return 0;
        int h1=0, h2=0;
        h1=dfs(root->right);
        h2=dfs(root->left);
        if(h1==-1 || h2==-1) return -1;
        if((h1-h2)>1 || (h1-h2)<-1) return -1;
        else 
        {
            if(h1>h2) return h1+1;
            else return h2+1;
        }
    }
    bool isBalanced(TreeNode *root) {
        // write your code here
        if(root==NULL) return true;
        if(dfs(root)==-1) return false;
        else return true;
    }
};
