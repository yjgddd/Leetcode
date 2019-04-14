/*
给两个字符串，表示的是数字，求相乘的结果，保证字符串没有前导0，同时要求不能先把字符串转换为数字来计算。
做法是先把num1和num2倒置，方便相乘和进位，然后对应位置求的值为temp=(num1[i]-'0')*(nums[j]-'0')加上进位s[i+i]，数组s里保存的是乘法也就是两字符串相乘
从最后一位到第一位的数字，可以乘法竖式里面理解，第i和第j位置相乘是数组的第i+j位，那么s[i+j]=temp%10，进位v[i+j+1]=temp/10。再把s数组倒过来去掉前导0,
转为字符串返回。
*/
class Solution {
public:
    string multiply(string num1, string num2) {
        int i,j,s[300],temp,len1=num1.size(),len2=num2.size();
        string ans="";
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        for(i=0;i<len1+len2;i++) s[i]=0;
        for(i=0;i<len1;i++)
            for(j=0;j<len2;j++)
            {
                temp=s[i+j]+(num1[i]-'0')*(num2[j]-'0');
                s[i+j]=temp%10;
                s[i+j+1]+=temp/10;
            }
        int judge=0;
        for(i=len1+len2-1;i>=0;i--)
        {
            if(judge==0&&s[i]!=0) judge=1;
            if(judge==1) ans+=to_string(s[i]);
        }
        return ans==""?"0":ans;
    }
};
