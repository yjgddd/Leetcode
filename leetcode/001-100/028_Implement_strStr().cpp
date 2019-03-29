/*典型的字符串匹配问题，求开始匹配时候的下标*/
//一开始写了一个很残的朴素匹配，也没有怎么优化，导致复杂度有点高，仅仅超过18%
class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans,i=0,j=0,h=0,judge=0;
        while(haystack[i]!=needle[j]&&i<haystack.size()) i++;
        if(haystack==needle||needle.size()==0) return 0;
        if(i==haystack.size()) return -1;
        else
        {
           while(1)
           {
               h=i;
               if(h>=haystack.size()) break;
               while(haystack[i]==needle[j])
               {
                   if(j==needle.size()-1) {judge=1;break;}
                   i++;
                   j++;
               }
               if(judge) break;
               else {i=h+1;j=0;}
           }
        }
        if(judge) return h;
        else return -1;
    }
};
/*然后发现C++里面本来有字符串截取函数，用一下代码更简单。字符串截取substr()函数参数是下标开始位置和长度。以及当剩下的长度本来就没有模式串的
长度长，那肯定没办法匹配成功了，这是一个优化点。然后这个代码就超过99.35%了。其实这道题我本来觉得要用KMP的...有时间再写吧*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0,len1=haystack.size(),len2=needle.size();
        if(len2>len1) return -1;
        if(haystack==needle||len2==0) return 0;
        for(i=0;i<len1-len2+1;i++)
        {
            if(needle==haystack.substr(i,len2)) return i;
        }
        return -1;
    }
};

