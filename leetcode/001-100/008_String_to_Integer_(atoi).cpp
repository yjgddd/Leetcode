/*将一个字符串中的数字提取出来，题目本身不难，但是题坑无数，一个个踩过来，wa加running time error加起来20多次我才通过，菜到哭泣，题目本身不难，要注意：
1、字符除了空格外第一个字符必须是数字或者正负号
2、数字或者正负号开始后一旦遇到非数字就终止
3、超出int的范围返回INT_MAX(2^31-1)或者INT_MIN((−2^31)，要判断好正负号
4、字符串可能前面带0，转为数字要处理前面的0
不满足上述条件的都返回0
题目中的测试用例
Input: "42"  Output: 42
Input: "   -42"  Output: -42
Input: "4193 with words"  Output: 4193
Input: "words and 987"   Output: 0
Input: "-91283472332" Output: -2147483648
自己遇到的各种坑：
Input:"-   234"  Output:
Input:"2147483648"  Output:2147483647
Input:"2147483646"  Output:2147483646
Input:"+-42"  Output:0
Input:""3.14159"  Output:3
Input:"-2147483647" Output:-2147483647
Input:"  -0012a42" Output:-12
Input:"+1" Output:1
*/
class Solution {
public:
    int myAtoi(string str) {
        vector <int> a;
        long long ans=0,temp=1;
        int i=0,flag=0,j=0,judge=0;
        while(str[i]==' ') i++;
        if(str[i]>='0'&&str[i]<='9'||str[i]=='-'||str[i]=='+');
        else return 0;
        for(i=0;i<str.size();i++)
        {   
            if(judge!=1)
            {
             if(str[i]>='0'&&str[i]<='9') {a.push_back(str[i]-'0');judge=1;}
             else if(str[i]=='-') {if(flag==1) return 0;else flag=-1;judge=1;}
             else if(str[i]=='+') {if(flag==-1) return 0;else flag=1;judge=1;}
                
            }
            else 
            {
                if(str[i]>='0'&&str[i]<='9') {a.push_back(str[i]-'0');}
                else break;
            }
            
        }
        if(a.size()==0) return 0; 
        i=0;
        while(a[i]==0&&i<a.size()-1) i++;
        for(j=a.size()-1;j>=i;j--)//这里还需要改
        {
            if(flag==-1&&temp*flag<INT_MIN) {return INT_MIN;}
            else if(flag!=-1&&temp>INT_MAX)  {return INT_MAX;}
            ans+=a[j]*temp;
            if(flag==-1&&ans*flag<INT_MIN) {return INT_MIN;}
            else if(flag!=-1&&ans>INT_MAX) {return INT_MAX;}
            temp*=10;
        }   
        if(flag==0) flag=1;
        return ans*flag;
    }
};
