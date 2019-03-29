/*给一些字符串，求他们的最长公共前缀子串。解法就遍历暴力求解，8ms,超过100%*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int i=0,j=0;
       string ans="";
       if(strs.size()==0) return ans;
       if(strs.size()==1) return strs[0];
       int m=strs[0].size();
       for(i=0;i<strs.size();i++)
       m=strs[i].size()?m:strs[i].size();
       for(j=0;j<m;j++)
       {
           for(i=0;i<strs.size()-1;i++)
           if((strs[i][j]!=strs[i+1][j])) break;
           if(i!=strs.size()-1) break;
           else {ans+=strs[0][j];}
       }
       return ans;
    }
};
