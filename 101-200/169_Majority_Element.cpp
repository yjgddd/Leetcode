class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> s;
        int len=nums.size();
        for(int i=0;i<len;i++)
        {
            s[nums[i]]++;
            if(s[nums[i]]>len/2) return nums[i];
        }
        return 0;
    }
};
//返回数组中出现次数超过数组长度一半的数，用一个map统计出现的次数即可
