/*判断一个字符串是否是由它的一个子串不断重复得来的，空串和一个字符的字符串显然不是。如果字符串的长度是len,用来重复的字符串长度i一定会小于len/2
而且len%i==0。如果一个字符串的前len-i个元素和倒数len-i个元素相等，那么该字符串是可以由i长度的子串不断复制得到(奇思妙想）可以用substr函数截取字
符串，本解法虽然很简短，但是提交后64ms,只超过33%左右，应该还可以再优化*/
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int len=s.size(),i=0,j=0,judge=0;
        if(len<=1) return false;
        for(i=1;i<=len/2;i++)
        if(len%i==0&&s.substr(0,len-i)==s.substr(i)) return true;
        return false;
    }
};
