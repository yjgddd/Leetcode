
//使用hash表，时间复杂度O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,len=nums.size();
        vector <int> ans;
        map <int,int> hash;
        for(i=0;i<len;i++)
            hash[nums[i]]=i;
        for(i=0;i<len;i++)
        {
           auto iter=hash.find(target-nums[i]);
           if(iter!=hash.end()&&iter->second!=i)
           {
               ans.push_back(i);
               ans.push_back(iter->second);
               return ans;
           }
        }
        return ans;
    }
};


