class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permute(nums,0,ans);
        return ans;
    }
private:
    void permute(vector <int> num,int begin,vector<vector<int>> &ans)
    {
        if(begin==num.size()) ans.push_back(num);
        for(int i=begin;i<num.size();i++){
            swap(num[begin],num[i]);//将begin后面每个和begin交换
            permute(num,begin+1,ans);
            swap(num[begin],num[i]);
        }
    }
};
/*求数字的所有排列组合。从begin开始进行排列，如果begin和num长度相同，则直接加入num，否则用一个 for 循环，把每一个数字都放到 begin 一次，
然后再变化后边的数字就够了，也就是调用permute 函数，从 begin + 1 开始的所有组合。*/
