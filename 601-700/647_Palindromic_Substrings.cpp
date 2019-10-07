class Solution {
public:
    int countSubstrings(string s) {
        int len=s.size(),ans=len,i,j,dis;
        vector<vector<bool>> judge(len, vector<bool>(len, true));
        for(i=len-1;i>=0;i--){
            for(dis=1;dis<len-i;dis++)
            {
                j=i+dis;
                if(s[i]==s[j]&&(dis==1||judge[i+1][j-1])){
                   ans++;
                } else{
                    judge[i][j]=false;
                }
        }   
    } 
    return ans;
    }
};
//求字符串中包含的所有回文字串的数量，dp
