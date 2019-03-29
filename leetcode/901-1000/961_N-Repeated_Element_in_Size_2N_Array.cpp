/*给一个长度为2N的数组，里面有N个不同的数字，其中只有一个数字重复了N次，找出这个数字。可以用Hash表，数字作为key，出现次数作为value,找出value为N的数字
，但其实所有只有一个数字是出现不止一次，只要发现一个数字的value超过1，就可以直接输出它了*/
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        map <int,int> hash;
        int i;
        for(i=0;i<A.size();i++)
        {
           if(hash.count(A[i])==0) ++hash[A[i]]; 
           else return A[i];
        }
        return 0;
    }
};
