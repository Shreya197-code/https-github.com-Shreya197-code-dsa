class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int maxRange = -1;
        int sum = 0;

        for (int num : nums) {
            int temp = num;
            int mx = 0;
            int mn = 9;

            while (temp > 0) {
                int digit = temp % 10;
                mx = max(mx, digit);
                mn = min(mn, digit);
                temp /= 10;
            }

            int range = mx - mn;

            if (range > maxRange) {
                maxRange = range;
                sum = num;
            }
            else if (range == maxRange) {
                sum += num;
            }
        }

        return sum;
    }
};