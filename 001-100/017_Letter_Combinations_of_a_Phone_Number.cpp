/*思路：每次将的元素挨个拿出来和新键盘中的字符相连接，再加入vector中。
举例：用一个字符串vector代表结果，若digits不为空，初始化vector为{""}
INPUT "23"
1、输入'2'代表"abc",已有排列中只有字符串""，依次相连接得到{"a","b","c"}
2、输入3，代表"def"
(1)删除vector中的"a"，并把a和'd','e','f'连接加入vector，得到{"b","c","ad","ae","af"}
(2)删除vector中的"b"，并把b和'd','e','f'连接加入vector，得到{"c","ad","ae","af","bd","be","bf"}
(3)删除vector中的"c"，并把c和'd','e','f'连接加入vector，得到{"ad","ae","af","bd","be","bf","cd","ce","cf"}
*/
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map <char,string> a;
        vector <string> s;
        if(digits.size()==0) return s;
        s.push_back("");
        string temp;
        int len;
        a['2']="abc";
        a['3']="def";
        a['4']="ghi";
        a['5']="jkl";
        a['6']="mno";
        a['7']="pqrs";
        a['8']="tuv";
        a['9']="wxyz";
        int i,j,k;
        for(i=0;i<digits.size();i++)
        {
             len=s.size();
             for(j=0;j<len;j++)
             {
               temp=s[0];
               s.erase(s.begin());
               for(k=0;k<a[digits[i]].size();k++)
               s.push_back(temp+a[digits[i]][k]);
                 
             }    
        }
        return s;
    }
};
