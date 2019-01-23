/*给两个字符串问它们是不是相似的字符串，比如“egg”和"add"就是相似的字符串，这题的解法是利用哈希表*/
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map <char,char> hash;
        int len=s.size(),i;
        if(s.size()!=t.size()) return false;
        if(s==t) return true;
        for(i=0;i<len;i++)
         if(hash.count(s[i])==0) hash[s[i]]=t[i];
         else if(hash[s[i]]!=t[i]) return false;
        hash.clear();
        for(i=0;i<len;i++)
         if(hash.count(t[i])==0) hash[t[i]]=s[i];
         else if(hash[t[i]]!=s[i]) return false;
        return true;
    }
};
