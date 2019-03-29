/*题目的意思是：您是产品经理，目前领导团队开发新产品。不幸的是，您产品的最新版本未通过质量检查。由于每个版本都是基于以前的版本开发的，因此糟糕版本之后
的所有版本也都很糟糕。假设您有n个版本[1,2，...，n]并且您想找出第一个坏的版本，这会导致以下所有版本都不好。您将获得一个API bool isBadVersion（版本），
它将返回版本是否错误。实现一个函数来查找第一个坏版本。您应该最小化对API的调用次数。
由于[1,2,...n]是有序的，可以用二分法提高效率，我的AC代码4ms,超过100%。P374和这道题是一个思路。
*/
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int l=1,r=n,mid;
        while(l<r)
        {
            mid=(l+r)/2;
            if(!isBadVersion(mid)) l=mid+1;
             if(isBadVersion(mid)&&isBadVersion(mid-1)) r=mid;
            if(isBadVersion(mid)&&!isBadVersion(mid-1))  return mid;
        }
        mid=(l+r)/2;
        return mid;
    }
};
