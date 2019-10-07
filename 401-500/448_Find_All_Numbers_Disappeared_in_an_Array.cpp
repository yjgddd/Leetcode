//找出数组中1-n没出现的数字
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> ans;
        int i;
        //先将数字调整到应当的位置
        for(i=0;i<nums.size();i++)
        {
            if(nums[nums[i]-1]!=nums[i]){
              swap(nums[nums[i]-1],nums[i]); 
              --i;
            } 
                 
        }
        //再判断数组中没出现的数字
        for(i=0;i<nums.size();i++)
            if(nums[i]!=i+1) ans.push_back(i+1);
        return ans;
        
    }
};
