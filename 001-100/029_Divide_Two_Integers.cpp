/*做两个数的除法，但是不让用乘法，除法，取模运算。一开始想那我用减法就好了，先对正负号进行判断，然后能被除数能减掉多少个除数就能得出答案。于是有了
下面5260ms的代码，只超过6%,果然是too young,事实上用位运算可以解决本问题*/
//用减法，每次只减掉一个除数
class Solution {
public:
    int divide(int dividend, int divisor) {
        long long ans=0;
        int temp=1;
        long long a=dividend,b=divisor;
        if(a>0&&b<0) {b=-b;temp=-1;}
        if(a<0&&b>0) {a=-a;temp=-1;}
        if(a<0&&b<0) {a=-a;b=-b;}
        if(abs(a)<abs(b)) return 0;
        while(a>=b) 
        {a-=b;ans++;}
        cout<<temp;
        if(temp==1) {if(ans>INT_MAX) return INT_MAX;else return ans;}
        else {if((-ans)<INT_MIN) return INT_MIN;else return -ans;}
    }
};
//用位运算，可以多嵌套一层循环，每次尽可能多减掉除数的倍数，提交12ms,超过99.63%
class Solution {
public:
    int divide(int dividend, int divisor) {
        long long ans=0;
        int temp=1;
        long long a=dividend,b=divisor;
        if(a>0&&b<0) {b=-b;temp=-1;}
        if(a<0&&b>0) {a=-a;temp=-1;}
        if(a<0&&b<0) {a=-a;b=-b;}
        if(abs(a)<abs(b)) return 0;
        while(a>=b) 
        {
            long long c=b,m=1;
            while((c<<1)<=a)
            {
                c<<=1;
                m<<=1;
            }
            a-=c;
            ans+=m;
        }
        if(temp==1) {if(ans>INT_MAX) return INT_MAX;else return ans;}
        else {if((-ans)<INT_MIN) return INT_MIN;else return -ans;}
    }
};
