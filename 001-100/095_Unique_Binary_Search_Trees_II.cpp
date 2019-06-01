/*求出1-n个数字组成的所有不同的二叉搜索树，是096的加强版，见代码*/
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
    vector<TreeNode*> generateTree(int str,int end)
    {
        vector<TreeNode*> ans;
        if(end-str<0)  ans.push_back(0);
        if(end-str==0) ans.push_back(new TreeNode(str));
        if(end-str>0)
        {
            for(int i=str;i<=end;i++)
            {
                vector<TreeNode*> l=generateTree(str,i-1);
                vector<TreeNode*> r=generateTree(i+1,end);
                for(int j=0;j<l.size();j++)
                    for(int k=0;k<r.size();k++)
                    {
                        TreeNode* h=new TreeNode(i);
                        h->left=l[j];
                        h->right=r[k];
                        ans.push_back(h);
                    }
            }
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
       vector<TreeNode*> ans;
       if(n==0) return ans; 
       else return generateTree(1,n);
    }
};
