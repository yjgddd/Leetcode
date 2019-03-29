//删除数组中的指定元素，和P026类似
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=0;
        for(i=0;i<nums.size();i++)
        {
           if(nums[i]==val) j++;
           else  nums[i-j]=nums[i];
        }
        return nums.size()-j;
    }
};
