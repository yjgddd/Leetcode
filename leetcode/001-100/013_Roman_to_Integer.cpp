/*罗马数字转换为数字，规则和P012相同:
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
可以用一个map，作为罗马数字和普通数字的对照（一般情况）。然后减掉三种特殊情况多加的值。不足是68ms，只超过55%。
*/
class Solution {
public:
    int romanToInt(string s) {
    map <char,int> a;
    int ans=0;
    a['I']=1;
    a['V']=5;
    a['X']=10;
    a['L']=50;
    a['C']=100;
    a['D']=500;
    a['M']=1000;
    for(int i=0;i<s.size();i++)
    {
        ans+=a[s[i]];
        if(i<s.size()-1)
        {
         if(s[i]=='I'&&(s[i+1]=='V'||s[i+1]=='X')) ans-=2;
         if(s[i]=='X'&&(s[i+1]=='L'||s[i+1]=='C')) ans-=20;
         if(s[i]=='C'&&(s[i+1]=='D'||s[i+1]=='M')) ans-=200;
        }
    }
    return  ans;
    }
};
