class Solution {
public:
    vector<int> countBits(int num) {
        vector <int> ans(num+1,0);
        for(int i=1;i<=num;i++)
        {
            ans[i]=ans[i&(i-1)]+1;
        }
        return ans;
    }
};
//求0-num每个数的二进制中包含一的个数。可以观察一下，每个数包含的1的个数都是“与”上前一个数对应的值，得到的数所包含的1的个数加1
