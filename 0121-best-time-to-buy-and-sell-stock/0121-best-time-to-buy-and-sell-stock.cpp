class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int profit=0;
      int price=prices[0];
      int sell=INT_MIN;
      for(int i=0;i<prices.size();i++){
        sell=max(sell,prices[i]);
        price=min(price,prices[i]);
        profit=max(prices[i]-price,profit);
      }
 return profit;
    } 
    
};