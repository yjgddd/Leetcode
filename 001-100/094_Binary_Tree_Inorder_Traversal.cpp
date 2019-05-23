/*二叉树的中序遍历，用递归即可*/
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> ans;
        inorder(root,ans);
        return ans;
    }
    void inorder(TreeNode* root,vector <int> &ans)
    {
        if(root==NULL) return;
        inorder(root->left,ans);//左
        ans.push_back(root->val);//中
        inorder(root->right,ans);//右
    }
};
