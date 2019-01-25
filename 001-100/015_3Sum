/*给一个数组，问加起来等于0的所有三元组，且元素相同的要去掉，比如
array nums = [-1, 0, 1, 2, -1, -4],
A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]
本题直接三重循环求解会超时。方法是先对数组排序，先固定一个数，就知道另外两个数的和，左右夹逼求得另外两个元素。由于先对数组进行了排序，因此去重的方法是找
到一个三元组解的时候，左右两边都跳过和解中相同的元素,同时第一个数也跳过和它相同元素。
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector <vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int l=i+1,r=nums.size()-1,target=0-nums[i];
            while(l<r)
            {
                if(nums[l]+nums[r]<target) l++;
                else if(nums[l]+nums[r]>target) r--;
                else 
                {
                    vector <int> temp(3,0);
                    temp[0]=nums[i];
                    temp[1]=nums[l];
                    temp[2]=nums[r];
                    ans.push_back(temp);
                    while(l<r&&nums[l]==temp[1]) l++;//去重
                    while(l<r&&nums[r]==temp[2]) r--;//去重
                }
            }
           while(i+1<nums.size()&&nums[i+1]==nums[i]) i++;//去重
        }
        return ans;
    }
};
