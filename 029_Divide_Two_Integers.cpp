/*做两个数的除法，但是不让用乘法，除法，取模运算。一开始想那我用减法就好了，先对正负号进行判断，然后能被除数能减掉多少个除数就能得出答案。于是有了
下面5260ms的代码，只超过6%,果然是too young,事实上用位运算可以解决本问题*/
//用减法
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
