class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int mini=prices[0];
        int n=prices.size();
        for(int i=0;i<n;i++){
          int profit=prices[i]-mini;
          mini=min(mini,prices[i]);
          maxi=max(maxi,profit);
        }
       return maxi;

    }
};