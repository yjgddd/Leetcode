/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxLength=0;
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return maxLength;
    }
    int dfs(TreeNode *root)
    {
        if(root==NULL) return 0;
        int l=dfs(root->left);
        int r=dfs(root->right);
        if(l+r>maxLength) maxLength=l+r;
        return (l>r?l:r)+1;
    }
};
//二叉树中最长的路径，如果包含根就是左子树深度+右子树深度-1，不包含根就把左子树或右子树当做根重复上诉过程。
