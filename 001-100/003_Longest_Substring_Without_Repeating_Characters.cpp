/*求最长不包含重复字符的子串的长度。可以建立一个字符串每个字符到位置的hash映射，一开始均初始化为1，再用str代表子串的初始位置，遍历字符串，hash值为-1
则更新为当前位置，当某个字符的hash值不是-1,说明前面有重复字符，将初始位置str改为前一个重复字符位置+1，hash值更新为当前位置。整个过程中记录最长子串长度
ans=max(ans,i-str+1)*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map <char,int> a;
        int i,str=0,ans=0;
        for(i=0;i<s.size();i++)
        a[s[i]]=-1;
        for(i=0;i<s.size();i++)
        {
            if(a[s[i]]==-1) a[s[i]]=i;
            else 
            {
                if(a[s[i]]>=str)
                {
                 str=a[s[i]]+1;
                }
                 a[s[i]]=i;       
                
            }
            ans=max(ans,i-str+1);
        }
     return ans;
    }
};
