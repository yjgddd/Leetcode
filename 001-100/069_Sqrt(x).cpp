/*手写sqrt()函数，返回的是整数。我用二分来找，也挺快的，12ms,超过99.24%*/
class Solution {
public:
    int mySqrt(int x) {
        long long l=1,r=x,mid;
        if(x==0) return 0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(mid*mid<x) l=mid+1;
            if(mid*mid>x) r=mid-1;
            if(mid*mid==x) return mid;
        }
        if(l*l>mid) l--;
        return l;
    }
};
