class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,1));
        for(int i=1;i<m;i++)
            for(int j=1;j<n;j++){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        return dp[m-1][n-1];
    }
};
/*矩阵从左上角走到右下角的不同路径少种，只能向下和向右走，用动态规划,dp[i][j]表示到达(i,j)的路径数,dp[i][j]=dp[i-1][j]+dp[i][j-1]。
而且对于合法的i,j,dp[0][j] = dp[i][0] = 1 */
