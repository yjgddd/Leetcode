/*翻转数字，比如123变为321，-123变为-321，120变为21，末尾0去掉。这个题目比较简单，注意超出范围[−2^31,  2^31 − 1]则返回0。我是用vector来做的，
似乎有更简洁的方法*/
class Solution {
public:
    int reverse(int x) {
        vector <int> a;
        long long ans=0,temp;
        while(x>=10&&x/10==0) x/=10;
        while(x!=0)
        {
            temp=x%10;
            x/=10;
            a.push_back(temp);
        }
        temp=1;
        for(int i=a.size()-1;i>=0;i--)
        {
           ans+=a[i]*temp;
           temp*=10;
           if (ans<INT_MIN || ans>INT_MAX) return 0;
        }
        return ans;
    }
};
