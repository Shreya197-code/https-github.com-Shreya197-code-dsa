
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();

        if (is_sorted(nums.begin(), nums.end()))
            return 0;

        int k = nums[0];

        // Case 1: Cyclic rotation of sorted array
        bool rotation = true;

        for (int i = 0; i < n; i++) {
            if (nums[i] != (k + i) % n) {
                rotation = false;
                break;
            }
        }

        if (rotation) {
            return min(n - k, k + 2);
        }

        // Case 2: Cyclic rotation of reversed sorted array
        bool reverseRotation = true;

        for (int i = 0; i < n; i++) {
            if (nums[i] != (k - i + n) % n) {
                reverseRotation = false;
                break;
            }
        }

        if (reverseRotation) {
            int shift = (k + 1) % n;
            return 1 + min(shift, n - shift);
        }

        return -1;
    }
};
