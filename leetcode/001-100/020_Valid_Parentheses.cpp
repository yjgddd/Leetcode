/*括号匹配，模拟栈的典型题目，可以用一个新的string模拟栈，遍历原来的字符串，若字符和栈的最后一个元素(即栈顶)相同，删除栈的最后一个元素，否则加入栈，
最终如果栈为空，说明是规范的括号字符串，返回ture,否则返回flase。
需要注意的在C++中，删除字符串用erase()函数,其参数是一个迭代器，begin()函数返回一个迭代器,指向字符串的第一个元素，end()函数返回一个迭代器，
指向字符串的末尾(最后一个字符的下一个位置)，因此如果要删除字符串最后一个元素，记得迭代器-1
*/
class Solution {
public:
    bool isValid(string s) {
        map <char,char> a;
        int i;
        string judge;
        a['}']='{';
        a[']']='[';
        a[')']='(';
        string::iterator iter=s.begin();
        if(s.size()<1) return true;
        int len=s.length(),j=0;
        for(i=0;i<s.size();i++)
        {
            if(judge.size()>0&&a[s[i]]==judge[judge.size()-1]) judge.erase(judge.end()-1);
            else judge.push_back(s[i]);
        }
        if(judge.size()==0) return true;
        else return false;
    }
};
