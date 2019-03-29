/*二进制加法。给两个二进制串，求它们的和。在C++中要注意string的处理*/
class Solution {
public:
    string addBinary(string a, string b) {
        int len=max(a.size(),b.size()),i;
        string ans(len,0);
        if(a.size()<b.size())
        {
            int temp=len-a.size();
            while(temp--)
            a.insert(a.begin(),'0');
        }
        else 
        {
           int temp=len-b.size();
           while(temp--)
           b.insert(b.begin(),'0'); 
        }
        for(i=len-1;i>=0;i--)
        {
            ans[i]+=(a[i]+b[i]-'0');
            if(ans[i]>'1'&&i>0) 
            {
                ans[i]-=2;
                ans[i-1]+=1;
            }
        }
        if(ans[0]>'1') 
        {
            ans[0]-=2;
            ans.insert(ans.begin(),'1');
        }
        return ans;
    }
};
