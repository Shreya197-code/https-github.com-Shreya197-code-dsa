class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
     vector<int> ans;
   // Length of the number (2 to 9)
        for (int len = 2; len <= 9; len++) {
// Starting digit
  for (int start = 1; start <= 10 - len; start++) {
                int num = 0;
                int digit = start;
                // Build the sequential number
                for (int i = 0; i < len; i++) {
                    num = num * 10 + digit;
                    digit++;
                }

                if (num >= low && num <= high)
                    ans.push_back(num);
            }
        }

        return ans;
    }
};