/*问1-n可以组成多少个不同的二叉搜索树。用动态规划，若一个数i为根节点，则有i-1个数在左子树，n个数在右子树，以i为根结点的树个数为左右子树的种类乘积，
用动态规划*/
class Solution {
public:
    int numTrees(int n) {
        vector <int> ans;
        int i,j;
        ans.push_back(1);
        ans.push_back(1);
        ans.push_back(2);
        if(n<3) return ans[n];
        for(i=3;i<=n;i++)
        { 
            int t=0;
            for(j=1;j<=i;j++)
                t+=ans[j-1]*ans[i-j];
            ans.push_back(t);
        }
        return ans.back();
    }
};
