class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int ans = 0;

        for (int x = 1; x <= 100; x++) {
            int first = -1, last = -1, freq = 0;

            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == x) {
                    if (first == -1)
                        first = i;

                    last = i;
                    freq++;
                }
            }

            if (freq > 0 && last - first + 1 == freq)
                ans++;
        }

        return ans;
    }
};