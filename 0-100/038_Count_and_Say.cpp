/*第一个字符串是1，接下来都是对前一个字符串的描述，第二个字符串是1个1，即11,第三个是2个1即21，第四个是1个2,1个1，即1211,第五个是111221，依次类推，返回第n个字符串。*/
class Solution {
public:
    string countAndSay(int n) {
        string s="1";
        if(n==1) return s;
        else
        {
            int i,j=0,k=0;
            for(i=2;i<=n;i++)
            {
               string t=s;
               s.clear();
               k=1;
               for(j=0;j<t.length();j++)
               {
                  if(t[j]==t[j+1]) {
                      k++;
                  }
                  else{
                      s+=to_string(k)+t[j];
                      k=1;
                  }
               }
             if(k==1&&j<t.length())  s+=to_string(k)+t[j];
            }
        }
        return s;
    }
};
