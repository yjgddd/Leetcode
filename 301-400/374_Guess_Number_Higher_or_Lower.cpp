/*猜数字，1-n,猜一个数字

每当你猜错了，会告诉你这个数字是高还是低。

调用预定义的API guess（int num），它返回3个可能的结果（-1,1或0）：

-1：我的号码较低
 1：我的号码更高
 0：恭喜！你说对了！
 这个题目是一个简单的二分法。AC的时间4ms,超过100%
 */
// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        long long int l=1,r=n,mid;
        while(l<r)
        {
            mid=(l+r)/2;
            if(guess(mid)==1) l=mid+1;
            if(guess(mid)==-1) r=mid;
            if(guess(mid)==0)  return mid;
        }
        mid=(l+r)/2;
        return mid;
    }
};
