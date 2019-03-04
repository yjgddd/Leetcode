/*字符串a重复多少次才能包含字符串b。字符串中的查找可以用find函数，查找失败返回npos,string::npos参数， npos 是一个常数，用来表示不存在的位置。
查找成功返回在母串中的位置*/
class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        int ans=1;
        string C=A;
        while(ans<=B.length()/A.length()+2)
        {
           if(C.find(B)!= string::npos) return ans;
           ans++;
           C+=A;
        }
        return -1;
    }
};
