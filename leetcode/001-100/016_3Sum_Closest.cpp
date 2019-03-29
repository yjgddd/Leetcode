/*给一个数组，求里面三个数加起来最接近target的，输出的是最接近traget的三个元素的和。这个题目思路和15题3Sum,基本相同，不再多写了，可以看前一题的题解*/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i,ans=nums[0]+nums[1]+nums[2],min=abs(target-ans);
        for(i=0;i<nums.size();i++)
        {
            int l=i+1,r=nums.size()-1;
            while(l<r)
            {
                int temp=nums[i]+nums[l]+nums[r];
                if(temp==target) return target;
                if(abs(target-temp)<min)
               {
                  min=abs(target-temp);
                  ans=temp;
                }
                if(temp<target) l++; 
                if(temp>target) r--;
            }
            while(i+1<nums.size()&&nums[i+1]==nums[i]) i++;
        }
        return ans;
    }
};
