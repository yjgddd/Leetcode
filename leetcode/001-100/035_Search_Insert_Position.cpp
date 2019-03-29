/*找插入的位置，使得原数字依然保持有序。比较简单，遍历一遍就可以*/
class Solution {
public:
     int searchInsert(vector<int>& nums, int target) {
     int  i,numsSize=nums.size();
     if(nums[0]>target) return 0;
     for(i=0;i<numsSize;i++)
     {
         if(nums[i]==target) return i;
         else if(nums[i]<target&&nums[i+1]>target&&(i+1)<numsSize) return i+1;
     }
    return i;
    }
};
