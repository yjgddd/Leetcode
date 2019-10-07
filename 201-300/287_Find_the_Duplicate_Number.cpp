/*n+1个数，数值范围是1-n，只有一个数字重复出现，找到这个数字。可以用二分法，low=1,high=n,mid=(low+high)/2，每次遍历nums,如果nums序列小于mid的数字
超过mid，那么重复出现的数字是在low-mid之间，否则是在(mid+1)-high之间*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int low=1,high=nums.size()-1;
         while(low<high)
         {
             int count=0;
             int mid=(low+high)/2;
             for(int i=0;i<nums.size();i++)
             {
                 if(nums[i]<=mid) count++;
             }
             if(count>mid) high=mid;
             else low=mid+1;
         }
        return low;
    }
};
