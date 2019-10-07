class Solution {
public:
    int maxCmp(int a,int b)
    {
        return a>b?a:b;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        vector <int> dp;
        dp.push_back(nums[0]);
        dp.push_back(maxCmp(nums[0],nums[1]));
        for(int i=2;i<nums.size();i++)
        {
            dp.push_back(max(dp[i-1],dp[i-2]+nums[i]));
        }
        return dp[nums.size()-1];
    }
};
//求数组中数字之和最大，要求相邻数字不能同时加入，返回和。用动态规划，dp[i]保存前0-i个数的最大数字和，等于dp[i-1]和dp[i-2]+nums[i]中较大的值
