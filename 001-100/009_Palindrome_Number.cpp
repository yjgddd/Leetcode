/*判断一个数字是不是回文数字，比较简单，可以求出反过来的数字，判断和原数字是否相等*/
class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0) return false;
       if(x==0) return true;
       long long temp,now=0,pre=x,c=1;
       vector <int> a;
       while(x!=0)
       {
           temp=x%10;
           x/=10;
           a.push_back(temp);
       }
       for(int i=a.size()-1;i>=0;i--)
       {
           now+=a[i]*c;
           c*=10;
       }
       if(now==pre) return true;
       else return false;
    }
};
