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
   
    vector<vector<int>> levelOrder(TreeNode* root) { 
        vector <vector<int>> ans;
        queue <TreeNode*> s;
        if(root==NULL) return ans;
        s.push(root);
        while(!s.empty()){
            vector <int> temp;
            int i,n;
            for(i=0,n=s.size();i<n;i++){
                TreeNode* q=s.front();
                s.pop();
                temp.push_back(q->val);
                if(q->left)  {s.push(q->left);}
                if(q->right) {s.push(q->right);}
            }
            if(!temp.empty()&&i==n) ans.push_back(temp);
            temp.clear();
        }
        return ans;        
    }
        
};
//二叉树的层次遍历，每一层保存在一个vector中，返回所有层的结点值。方法是用队列，每次队头出列的时候，把左右结点加入，可以模拟层次遍历
