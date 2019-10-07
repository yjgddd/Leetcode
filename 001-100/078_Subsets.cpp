/*给一个不包含重复数字的集合，求它的所有子集。每次在ans里的每个集合加入新数字即可
比如集合是[1,2,3]
首先ans里面只有一个空的子集[[]]
把1加入[]: [[], [1]];
把2加入[]和[1]: [[], [1], [2], [1, 2]];
把3加入[], [1], [2]和[1, 2]: [[], [1], [2], [1, 2], [3], [1, 3], [2, 3], [1, 2, 3]]
*/
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <vector <int>> ans={{}};
        for(int i=0;i<nums.size();i++){
            int n=ans.size();
            for(int j=0;j<n;j++){
            ans.push_back(ans[j]);
            ans.back().push_back(nums[i]);
            }
        }
        return ans;
    }
};
