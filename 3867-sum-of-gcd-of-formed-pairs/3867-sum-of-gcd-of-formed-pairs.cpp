class Solution {
public:
    long long gcdSum(vector<int>& nums) {
         vector<int> prefixGcd;
        int mx = 0;

        // Step 1: Construct prefixGcd
        for (int i = 0; i < nums.size(); i++) {
            mx = max(mx, nums[i]);
            prefixGcd.push_back(gcd(nums[i], mx));
        }

        // Step 2: Sort prefixGcd
        sort(prefixGcd.begin(), prefixGcd.end());

        // Step 3: Pair smallest with largest
        long long ans = 0;
        int left = 0;
        int right = prefixGcd.size() - 1;

        while (left < right) {
            ans += gcd(prefixGcd[left], prefixGcd[right]);
            left++;
            right--;
        }

        return ans;
    }
};
    