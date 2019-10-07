/*最大连续子序列和问题，动态规划*/
class Solution {
public:
    int maxCmp(int a,int b){
        return a>b?a:b;
    }
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0],maxArray=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            maxArray=maxCmp(maxArray+nums[i],nums[i]);
            ans=maxCmp(ans,maxArray);
        }
        return ans;
    }
};
