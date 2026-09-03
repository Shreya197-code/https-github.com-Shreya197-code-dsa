class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        vector<bool> seen(101, false);
        vector<bool> bad(101, false);

        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                int x = nums[i];

                if (!seen[x]) {
                    seen[x] = true;
                    ans++;
                }
                else if (!bad[x]) {
                    bad[x] = true;
                    ans--;
                }
            }
        }

        return ans;
    }
};