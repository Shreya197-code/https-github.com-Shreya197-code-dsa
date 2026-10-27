class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int price=prices[0];
        for(int i=1;i<prices.size();i++){
            price=min(prices[i],price);
             maxi=max(maxi,prices[i]-price);
        }
        return maxi;
    }
};