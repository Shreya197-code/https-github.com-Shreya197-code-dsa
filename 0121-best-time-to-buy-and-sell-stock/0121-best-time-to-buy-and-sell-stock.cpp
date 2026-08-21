class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxi=0;
       int cp=prices[0];
       for(int i=0;i<prices.size();i++){
        int buy=min(cp,prices[i]);
        cp=buy;
        maxi=max(maxi,prices[i]-buy);
       }
      return maxi;
    } 
    
};