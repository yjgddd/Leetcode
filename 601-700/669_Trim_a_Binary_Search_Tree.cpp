/*修剪一个二叉树，使得所有结点的值都在L和R直接。用递归，如果root的值比L还小，那么root的左子树上的结点一定都比L小，全部舍弃，在root的右子树继续递归修剪
如果root的值比R还大，那么root的右子树上的结点一定都比R大，全部舍弃，在root的左子树继续递归修剪。如果root在L和R之间则递归修剪左右子树*/
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
    TreeNode* trimBST(TreeNode* root, int L, int R) {
       if(root==NULL) return NULL;
       if(root->val<L)  root=trimBST(root->right, L, R);
       else if(root->val>R) root=trimBST(root->left,  L,  R);
       else
       {
           root->left=trimBST(root->left, L, R);
           root->right=trimBST(root->right, L, R);
           return root;
       }
       return root;
    }
};
