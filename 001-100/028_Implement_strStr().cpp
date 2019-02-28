/*典型的字符串匹配问题，求开始匹配时候的下标*/
//一开始写了一个很残的朴素匹配，仅仅超过18%
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
//然后发现C++里面有字符串截取函数，用一下代码更简单
