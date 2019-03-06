/*在array中找出所有加起来等于target的组合，array中的数字可以重复,但组合不可以重复。可以先给array排序，再用回溯的方法。每次都代入用一个数字，直到等于
target或者大于target，倒退回去一个数字，继续递归。*/
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <vector <int>> ans;
        vector <int> temp;
        map <int,int> a;
        backstracking(ans,temp,candidates, target,0);
        return ans;
    }
    void backstracking(vector <vector <int>> &ans,vector<int> &temp,vector<int>& candidates, int target,int index)
    {
        int i;
        if(target<0) return;
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }
        for(i=index;i<candidates.size();i++)
        {
            temp.push_back(candidates[i]);
            backstracking(ans,temp,candidates, target-candidates[i],i);
            temp.pop_back();
        }
    }
};
