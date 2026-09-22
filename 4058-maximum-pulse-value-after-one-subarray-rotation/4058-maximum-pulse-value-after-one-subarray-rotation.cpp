class Solution {
public:
    long long maxValue(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                ans+=nums[i];
            }
            else{
                ans-=nums[i];
            }
        }
         long long pref = 0;
        // Maximum prefix sum for even and odd positions
        long long mx[2] = {0, LLONG_MIN};
         long long change = 0;
        for (int i = 0; i < nums.size(); i++) {
             if (i % 2 == 0)
                pref += nums[i];
            else
                pref -= nums[i];
            int p = (i + 1) % 2;
            if (mx[p] != LLONG_MIN) {
                change = max(change, -2LL * (pref - mx[p]));
            }
           mx[p] = max(mx[p], pref);
        }
        return ans + change;
    }
};