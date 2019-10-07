/*合并两个二叉树，如果对应结点均非空，则新树是两个结点的和，一个是空则是非空结点的值，均为空则新树的结点为空*/
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
    TreeNode *t=new TreeNode(0);
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
          if(t1==NULL&&t2==NULL) return NULL;
          TreeNode *t;
          if(t1==NULL) t=new TreeNode(t2->val);
          else if(t2==NULL) t=new TreeNode(t1->val);
          else  t=new TreeNode(t1->val+t2->val);
          TreeNode *tl1=t1==NULL?NULL:t1->left;
          TreeNode *tr1=t1==NULL?NULL:t1->right;
          TreeNode *tl2=t2==NULL?NULL:t2->left;
          TreeNode *tr2=t2==NULL?NULL:t2->right;
          t->left=mergeTrees(tl1,tl2);
          t->right=mergeTrees(tr1,tr2);
          return t;
    }
};
