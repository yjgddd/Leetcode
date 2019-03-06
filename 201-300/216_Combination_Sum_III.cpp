/*和P039以及P040类似，回溯问题。题意是用k个数字组合起来等于n。这k个数字是1-9的数字且不能重复。可以先构造一个包含1-9的Array，和P039以及P040一样作为
回溯的参数，同时增加一个参数即组合数字的个数k。由于数字不能重复，下一次递归的时候参数就改为backstracking(ans,temp,nums, n-nums[i],k-1,i+1);
每次k==0&&n==0时候，说明组合成功，加入ans中。这三道都是非常好的题目*/
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector <vector <int>> ans;
        vector <int> nums;
        for(int i=0;i<9;i++)
        nums.push_back(i+1);
        vector <int> temp;
        backstracking(ans,temp,nums, n,k,0);
        return ans;
    }
    void backstracking(vector <vector <int>> &ans,vector<int> &temp,vector<int>& nums, int n,int k,int index)
    {
        int i;
        if(n<0||k<0) return;
        if(n==0&&k==0)
        {
            ans.push_back(temp);
            return;
        }
        for(i=index;i<nums.size();i++)
        {
            temp.push_back(nums[i]);
            backstracking(ans,temp,nums, n-nums[i],k-1,i+1);
            temp.pop_back();
        }
    }  
};
