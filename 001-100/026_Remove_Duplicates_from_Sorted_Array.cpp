class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map <int,int> a;
        int ans=0,i=0,j=0;
        for(i=0;i<nums.size();i++)
        {
          if(a[nums[i]]==0) {ans++;nums[j++]=nums[i];}
          a[nums[i]]+=1;  
        }
        return ans;
    }
};
