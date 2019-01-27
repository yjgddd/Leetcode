/*计算两个字符串的匹配程度，位置相同，字符相同的是bulls，位置不同字符相同的是cows.分别用A和B来代表,返回A和B的个数，
比如
Input: secret = "1807", guess = "7810"
Output: "1A3B"
Explanation: 1 bull and 3 cows. The bull is 8, the cows are 0, 1 and 7.
解题思路是用两个哈希表，分别统计两个字符串中每个字符出现的次数。即key是字符，value是出现的次数，在遍历的时候如果对应位置匹配了，直接把A类型的个数加1，
否则才将哈希表的value增加，因为A是B的特殊情况，这样做就去掉计算B中包含的A。然后遍历secret中的key，和guess相同key，求value的较小值，加入B中，统计出B
类型匹配的个数。最后返回的是string,要进行类型转换，to_string可以将int转为为字符串。同时往string中插入字符串和插入字符是不一样的，一个参数是位置，
一个是迭代器，需要注意。
*/
class Solution {
public:
    string getHint(string secret, string guess) {
        map <char,int> s,t;
        string ans;
        int a=0,b=0,i;
        for(i=0;i<secret.length();i++)
        {
          if(secret[i]==guess[i]) 
             a++;
          else
          {
             s[secret[i]]+=1;
             t[guess[i]]+=1; 
          } 
          //cout<<s[secret[i]]<<t[guess[i]]<<endl;
        }
        map<char,int>::iterator it=s.begin();
        while(it!=s.end())
        {
            b+=min(it->second,t[it->first]);
            ++it;
        }
        string a1=to_string(a),b1=to_string(b);
        ans.insert(ans.size(),a1);
        ans.insert(ans.end(),'A');
        ans.insert(ans.size(),b1);
        ans.insert(ans.end(),'B');
        return ans;
    }
};
