class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,len=nums.size();vector <int> ans;
        for(i=0;i<len;i++)
            for(j=i+1;j<len;j++)
                if(nums[i]+nums[j]==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                    break;
                }
        return ans;
    }
};
