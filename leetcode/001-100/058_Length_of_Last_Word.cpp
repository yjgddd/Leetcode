/*这题是给一个字符串，可能包含空格，求不包含空格的最后一个子串的长度，比较简单，先把末尾的空格处理掉，再顺序遍历遇到空格就把答案置为0，否则++即可*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int k=0,i;
        for(i=s.length()-1;s[i]==' ';i--);
        for (int j=0;j<=i;j++)
        {
            if(s[j]==' ') k=0;
            else k++;
        }
    return k;
    }
};
