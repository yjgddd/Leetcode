class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector <int> ans(T.size(),0);
        vector <int> s(101,INT_MAX);
        int i=0,j=0;
        for(i=T.size()-1;i>=0;i--){
            int earliest = INT_MAX;
            for(j=T[i]+1;j<=100;j++){
                   earliest=earliest<s[j]?earliest:s[j];//从比当前温度大1，到温度为100，从后面找出比当前温度大的最小位置
            }
            if(earliest!=INT_MAX) ans[i]=earliest-i;
            s[T[i]]=i;//保存温度的位置，因为是从后往前早，只有在当前温度后面位置的温度才有对应值，因此内层循环不必担心找到的是前面的温度
        }
        return ans;
    }
};
//给一个天气的列表，问每天要等几天可以等到比今天温度更高的天气，列表长度范围是[1, 30000]，天气的范围是[30,100]。也就是返回比当前数更大的数的距离列表。
