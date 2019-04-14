/*返回和模式串类似的串，因为不知道怎么判断哈希表里面的vlaue不同，Debug到哭好吗。最后还是借鉴讨论区写了一个判断函数好吗。为什么没有函数可以用啊！！！*/
class Solution {
public:
    bool judge(map <char,char> a, char value, char key){
         for(map<char,char>::iterator it = a.begin(); it !=a.end(); it++)
             if(it->second == value && it->first != key) return false;
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector <string> ans;
        string s;
        map <char,char> a;
        int i,j,h;
        for(i=0;i<words.size();i++)
        {
            if(words[i].size()!=pattern.size()) continue;
            for(j=0;j<pattern.size();j++)
            {
                a[pattern[j]]='*';
            }
            for(j=0;j<pattern.size();j++)
            {
                if(a[pattern[j]]=='*'&&judge(a,words[i][j],pattern[j]))
                {
                    a[pattern[j]]=words[i][j];
                }
                else if(a[pattern[j]]==words[i][j]) continue;
                else {break;}
            }
            if(j==pattern.size()) ans.push_back(words[i]);
        }
        return ans;
    }
};
