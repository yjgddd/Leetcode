//简单题，什么时候买进卖出获得利润最多，返回最大利润
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1) return 0;
        int buy=prices[0],ans=0;
        for(int i=0;i<prices.size()-1;i++)
          for(int j=i+1;j<prices.size();j++){
              if(prices[i]<buy) buy=prices[i];
              if(prices[j]-buy>ans) ans=prices[j]-buy;
          }
        return ans;
    }
};
