class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector <int> output(n,1);
        int begin=1,end=1;
        for(int i=0;i<n;i++){
           output[i]*=begin;
           begin*=nums[i];
           output[n-1-i]*=end;
           end*=nums[n-i-1];
        }
        return output;
    }
};
/*给一个序列，求除了当前数剩余数的乘积序列，要求不能用除法，不能额外申请空间，时间复杂度在O(n)以内。参考讨论区代码如上，其实中心思想就是一层循环，用
begin代表nums[i]前面的数的乘积，end是后面的数的乘积，output是begin和end的乘积，一层循环的代码真是优秀。*/
