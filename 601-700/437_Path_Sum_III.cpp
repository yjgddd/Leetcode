/*找到二叉树中所有子路径结点值的和加起来为sum的子路径个数。可以把每个结点作为根结点，先序遍历找到满足条件的路径。*/
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
        return PreOrder(root,sum,sum)+pathSum(root->left,sum)+pathSum(root->right, sum);//每个结点都做为根节点找一遍
    }
private:
    int PreOrder(TreeNode* root, int sum,int temp){
        if(root!=NULL)
        {
            temp-=root->val;
            return PreOrder(root->left, sum,temp)+PreOrder(root->right, sum,temp)+(temp==0);//temp==0说明路径上的结点和为sum   
        }
        else return 0;
    }
};
