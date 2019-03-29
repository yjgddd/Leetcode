/*爬楼梯，每次可以走一步或者两步，问有多少种方式。解法是动态规划，n=1的时候只有一种方式：1 step,n=2的时候，有两种方式：1 step,1 step或者一次2 step.
当n大于2的时候ans[i]=ans[i-1]+ans[i-2]*/
class Solution {
public:
    int climbStairs(int n) {
        vector<int> ans(n,0);
        if(n==1) return 1;
        ans[0]=1;
        ans[1]=2;
        for(int i=2;i<n;i++)
        ans[i]=ans[i-1]+ans[i-2];
        return ans[n-1];
    }
};
