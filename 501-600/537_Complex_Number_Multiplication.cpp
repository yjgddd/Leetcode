/*给两个字符串表示复数，计算两者乘积。比如：
Example 1:
Input: "1+1i", "1+1i"
Output: "0+2i"
Explanation: (1 + i) * (1 + i) = 1 + i2 + 2 * i = 2i, and you need convert it to the form of 0+2i.
做法是将实部和虚部提取出来，比如第一个复数的实部a1,虚部a2,第二个复数的实部b1,虚部b2,那么乘积就是(a1*b1-a2*b2)+(a1*b2+b1*a2)i*/
class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        int a1,a2,b1,b2,i;string ans;
        for(i=0;i<a.size();i++)
            if(a[i]=='+') {a1=stoi(a.substr(0,i));break;}
        a2=stoi(a.substr(i+1,a.size()-i-2));
         for(i=0;i<b.size();i++)
            if(b[i]=='+') {b1=stoi(b.substr(0,i));break;}
        b2=stoi(b.substr(i+1,b.size()-i-2));
        ans+=to_string(a1*b1-a2*b2);
        ans+='+';
        ans+=to_string(a1*b2+b1*a2);
        ans+='i';
        return ans;
    }
};
