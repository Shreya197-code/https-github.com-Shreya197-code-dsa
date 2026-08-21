class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxprofit=0;
       int miniprice=prices[0];
       for(int i=0;i<prices.size();i++){
        int profit=prices[i]-miniprice;
        maxprofit=max(maxprofit,profit);
        miniprice=min(miniprice,prices[i]);
       }
      return maxprofit;
    } 
    
};