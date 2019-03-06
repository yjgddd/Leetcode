/*和039类似，不同的是要求数组中的元素不可以重复用。*/
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
            if(i!=0&&candidates[i]==candidates[i-1]&&i>index) continue;//避免出现重复组合
            temp.push_back(candidates[i]);
            backstracking(ans,temp,candidates, target-candidates[i],i+1);//i变成i+1
            temp.pop_back();
        }
    }
};
