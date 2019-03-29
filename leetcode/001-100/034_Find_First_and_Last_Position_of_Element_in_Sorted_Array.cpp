/*在有序数组中找出target的起始位置和结束为止，如果不存存在返回[-1,-1],要求时间复杂度O（logn）,因此用二分法，找到和target相等的元素，再左右看是否还有
和target相等的元素*/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      vector <int> ans={-1,-1};
      if(nums.size()==0) return ans;
      int l=0,r=nums.size()-1,mid;
      while(l<r)
      {
          mid=(l+r)/2;
          if(nums[mid]<target) l=mid+1;
          if(nums[mid]>target) r=mid-1;
          if(nums[mid]==target) {l=mid,r=mid;break;}
      }
      mid=(l+r)/2; 
      if(nums[mid]==target) {l=mid,r=mid;}
      //cout<<mid;
      if(nums[mid]==target) 
      {
          while(l>0&&nums[l-1]==nums[mid]) l--; 
          while(r<nums.size()-1&&nums[r+1]==nums[mid]) r++;
      }
      else {l=-1;r=-1;}
      ans[0]=l;
      ans[1]=r;
      return ans;
    }
};
