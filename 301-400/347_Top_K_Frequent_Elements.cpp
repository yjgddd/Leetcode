class Solution {
public:
    static bool cmp(pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map <int,int> s;//统计每个数字出现的次数
        int i=0;
        for(i=0;i<nums.size();i++)
            s[nums[i]]++;
        vector <pair<int,int>> vec(s.begin(),s.end());//将map保存到pair中，按照出现的次数排序
        sort(vec.begin(),vec.end(),cmp);
        for(i=0;i<k;i++)
            ans.push_back(vec[i].first);
        return ans;
    }
};
//出现最频繁的k个数
