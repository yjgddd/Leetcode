/*找字符串中的最长回文字符串，没想到什么好办法，只是暴力加上一些剪枝*/
class Solution {
public:
    string longestPalindrome(string s) {
        int i,len=s.length(),j,max=1,r=0,l=0,h,k;
        string t="";
        for(i=0;i<len;i++)
        {
            int judge=1;
            for(j=len-1;j>i;j--)
            {
                judge=1;
                if((j-i+1)>max)
                {
                    if(s[i]==s[j])
                    {
                       h=i,k=j;
                       while(h<=k)
                       {
                           if(s[h]==s[k]) {h++;k--;}
                           else {judge=0;break;}
                       }
                       if(judge==1)
                       {
                           r=i;l=j;
                           max=j-i+1;
                           break;
                       }
                    }
                }
                else break;
             }
        }
        for(int x=r;x<=l;x++)
        t+=s[x];
        return t; 
    }
};
