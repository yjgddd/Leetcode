/*判断一个二叉树是不是镜像对称的，用递归。递归判断左右结点、左结点的右子树和右结点的左子树、左结点的左子树和右结点的右子树是否相同*/
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
    bool isSymmetric(TreeNode* root) {
      if(root==NULL) return true;
      else return judge(root->left,root->right); 
    }
    bool judge(TreeNode* p,TreeNode*q){ 
        if(p==NULL&&q==NULL) return true;
        else if(p==NULL||q==NULL) return false;
        else return (p->val==q->val)&&judge(p->left,q->right)&&judge(p->left,q->right)&&judge(p->right,q->left);
    }
}; 
