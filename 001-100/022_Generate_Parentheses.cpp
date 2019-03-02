/*给n个括号，问有多少种合理组合的可能，比如n=3时，返回
[
  "((()))",
  "(()())",
  "(())()",
  "()(())",
  "()()()"
]
这道题是实在是自己没有想出很好的解法，看了一个博客写的很清楚，用回溯Backtracking。https://blog.csdn.net/Liluyuan5323/article/details/78252799
以下全是引用加上自己的一点点注解：
所谓Backtracking都是这样的思路：在当前局面下，你有若干种选择。那么尝试每一种选择。如果已经发现某种选择肯定不行（因为违反了某些限定条件），就返回；
如果某种选择试到最后发现是正确解，就将其加入解集。

对于这道题，在任何时刻，你都有两种选择： 
1.  加左括号。 
2.  加右括号。

同时有以下限制： 
1.  如果左括号已经用完了，则不能再加左括号了。 
2.  如果已经出现的右括号和左括号一样多，则不能再加右括号了。因为那样的话新加入的右括号一定无法匹配。
（因为")("是错误的，如果有多余的右括号就不能再合理）

结束条件是： 
左右括号都已经用完。

结束后的正确性： 
左右括号用完以后，一定是正确解。因为1. 左右括号一样多，2. 每个右括号都一定有与之配对的左括号。因此一旦结束就可以加入解集
（有时也可能出现结束以后不一定是正确解的情况，这时要多一步判断）。

递归函数传入参数： 
限制和结束条件中有“用完”和“一样多”字样，因此你需要知道左右括号的数目。 
当然你还需要知道当前局面sublist和解集res。

因此，把上面的思路拼起来就是伪代码：
if (左右括号都已用完) {
  加入解集，返回
}
//否则开始试各种选择
if (还有左括号可以用) {
  加一个左括号，继续递归
}
if (右括号小于左括号) {
  加一个右括号，继续递归
}
自己写了一个代码如下，和博主基本一样。
*/
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector <string> ans;
        if(n==0) return ans;
        backtrack(n,n,"",ans);
        return ans;
    }
    void backtrack(int left,int right,string s,vector <string> &result)//必须用引用
    {
        if(left==0&&right==0)
        {
            result.push_back(s);
        }
        if(left>0)
        backtrack(left-1,right,s+'(',result);
        if(right>0&&left<right)
        backtrack(left,right-1,s+')',result);
    }
};
