/*判断二叉树有多少条路径上结点和为sum.方法是先序遍历+递归*/
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
    int pathSum(TreeNode* root, int sum) {
        if(root==NULL) return 0;
        return PreOrder(root,sum,sum)+pathSum(root->left,sum)+pathSum(root->right, sum);
    }
private:
    int PreOrder(TreeNode* root, int &sum,int temp){
        if(root!=NULL)
        {
            temp-=root->val;
            return PreOrder(root->left, sum,temp)+PreOrder(root->right, sum,temp)+(temp==0);     
        }
        else return 0;
    }
};
