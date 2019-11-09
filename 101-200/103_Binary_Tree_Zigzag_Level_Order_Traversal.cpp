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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector <vector<int>> ans;
        queue <TreeNode*> s;
        if(root==NULL) return ans;
        s.push(root);
        int judge=1;
        while(!s.empty()){
            int i,n=s.size();
            vector <int> temp(n);
            for(i=0,n=s.size();i<n;i++){
                TreeNode* q=s.front();
                s.pop();
                if(judge==1){    
                  temp[i]=q->val;
                }else{
                   temp[n-i-1]=q->val;              
                }   
                if(q->left)  {s.push(q->left);}  
                if(q->right) {s.push(q->right);}             
            }
            if(judge==1) judge=0;
            else judge=1;
            ans.push_back(temp);
            temp.clear();
        }
        return ans;   
    }
};
//从左到右再从右到左层次遍历二叉树，依然是用队列来做，只不过每层保存的时候，顺序保存和倒序保存交替进行。
