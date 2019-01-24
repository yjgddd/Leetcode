/*求比n小的素数的个数，想尽办法降低复杂度，比如偶数肯定不是素数，筛掉偶数，筛掉已知的素数的倍数等*/
class Solution {
public:
    int countPrimes(int n) {
        int count=1,i,j;
        vector<int> judge(n,1);
        if(n<=2) return 0;
        else 
        for(i=3;i<n;i+=2)
        {
            if(judge[i]==1) count++;
            if(i*i<n)
            for(j=i+i;j<n;j+=i)
              judge[j]=0;
        }
        return count;      
    }
};
