/*假设您有排队的人的随机列表。 每个人都用一对整数（h，k）描述，其中h是人的身高，k是在此人面前的身高大于或等于h的人数。 编写算法以重建队列。*/
class Solution {
public:
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        auto cmp = [](const vector<int> &a, const vector<int> &b) {
            return a[0] > b[0] || (a[0] == b[0] && a[1] < b[1]);
        };
        vector<vector<int>> ans;
        sort(people.begin(),people.end(),cmp);//先按照身高从小到大排序，身高相同按照第二个，在此人面前的身高大于或等于h的人数从小到大排序
        for(int i=0;i<people.size();i++)
        {
            ans.insert(ans.begin()+people[i][1],people[i]);//将排序好的数组插入到对应的位置
        }
        return ans;
    }
};
