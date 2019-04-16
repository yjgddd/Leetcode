/*返回调整的T字符串，在S中出现，在字符串T中也出现的字符，使得在返回的T字符串中按照S的顺序，其他的可以在任意位置，做法是借用Hash表，见代码*/
class Solution {
public:
    string customSortString(string S, string T) {
        string ans;
        map <char,int> a;
        int i;
        for(i=0;i<S.size();i++)
        {
             a[S[i]]=1;//在S中出现标记为1
        }   
        for(i=0;i<T.size();i++)
            if(a[T[i]]>=1) a[T[i]]++;//出现多次累计
            else ans.push_back(T[i]);//没有出现的先加入结果字符串中
        for(i=0;i<S.size();i++)
        {
            while(a[S[i]]!=1) 
            {
                ans.push_back(S[i]);//再把在S和T中都出现的字符按照顺序加入结果中，且hash表中统计了个数，保证重复的字符不会少
                a[S[i]]--;
            }
        }
        return ans;               
    }
};
