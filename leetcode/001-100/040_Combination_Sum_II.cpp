/*在array中找出所有加起来等于target的组合，组合不可以重复。可以先给array排序，再用回溯的方法。每次都代入一个数字，直到等于target或者大于target，
倒退回去一个数字，继续递归。和039类似，不同的是本题要求数组中的元素不可以重复用，要注意回溯参数变化，i变成i+1。以及遇到重复的数字跳过*/
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector <vector <int>> ans;
        vector <int> temp;
        sort(candidates.begin(),candidates.end());
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
            if(i!=0&&candidates[i]==candidates[i-1]&&i>index) continue;//跳过避免出现重复组合
            temp.push_back(candidates[i]);
            backstracking(ans,temp,candidates, target-candidates[i],i+1);//i变成i+1
            temp.pop_back();
        }
    }
};
