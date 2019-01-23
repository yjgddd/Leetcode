/*简单题，给两个字符串s和t问是不是变位词，变位词就是同一个单词交换字母顺序。我直接调用sort对字符串内部排序，最后s和t相等就是变位词,试了一下不是很快，
于是换一种方法：统计一下s和t中每个字符的个数，比较是否相同*/
//解法1
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return true;
        else return false;
        
    }
};
//解法2，快了很多，超过了99.09%
class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[26]={0},b[26]={0},i;
        for(i=0;i<s.length();i++)
         a[s[i]-'a']++;
        for(int i=0;i<t.length();i++)
         b[t[i]-'a']++;
        for(i=0;i<26;i++)
        if(a[i]!=b[i]) return false;
        return true;     
    }
};
