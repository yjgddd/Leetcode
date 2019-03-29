/*给一个排序好的数组，删除重复元素，返回数组长度*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans=0,i=0,j=0;
        for(i=1;i<nums.size();i++)
        {
          if(nums[i]==nums[i-1]) j++;
          else nums[i-j]=nums[i];
           
        }
        return nums.size()-j;
    }
};
