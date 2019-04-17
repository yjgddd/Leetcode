/*
求x^n方，要考虑底数为0、指数为负等特殊情况。剑指offer有相同的题目，不用pow函数的解为递归+位运算：

假设求2^32,可以转换为求(2^16) * (2^16),2^16=(2^8) * (2^8),....也就是说，可以用如下公式：

当n为偶数时，a^n=(a^(n/2)) * (a^(n/2))

当n为奇数时，a^n=a^((n-1)/2) * a^((n-1)/2) * a

用右移运算符代替除以2，用位与运算符代替求余运算来判断一个数的奇偶性，提高效率。
*/
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;//判断底数为1
        if(n==1) return x;//指数为1返回base
        if(n==-1) return 1/x;//判断指数为负
        double result=myPow(x,n>>1);//递归
        result*=result;
        if(n&0x1==1)
            result*=x;//如果是奇数，多乘以一个base
        return result;
    }
};
