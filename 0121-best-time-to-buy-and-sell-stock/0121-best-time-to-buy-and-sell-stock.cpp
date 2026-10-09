class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price=prices[0];
        int maxi=0;
        for(int i=1;i<prices.size();i++){
                price=min(price,prices[i]);
                maxi=max(maxi,prices[i]-price);
        }
        return maxi;
    }
};