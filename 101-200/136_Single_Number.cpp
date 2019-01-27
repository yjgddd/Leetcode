/*找出一组数中只出现一次的那个数字，别的数字都是出现两次。这题我的做法用哈希表统计每个数字出现次数。然而真正天才的做法是用抑或操作*/
//我的解法
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int,int> s;
        for(int i=0;i<nums.size();i++)
        ++s[nums[i]];
        for(int i=0;i<nums.size();i++)
        if(s[nums[i]]==1) return nums[i];
        return 0;
    }
};
//换用抑或,可以打败99%以上的C++解法，真正短小精悍啊
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int result=0;
       for(int i=0;i<nums.size();i++)
           result^=nums[i];
        return result;
    }
};
