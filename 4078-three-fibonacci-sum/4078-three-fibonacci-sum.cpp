
class Solution {
public:
    bool threeFibonacciSum(int n) {
        vector<long long> fib = {0, 1};
        while (true) {
            int s = fib.size();
            long long next = fib[s - 1] + fib[s - 2];
            if (next > n) break;
            fib.push_back(next);
        }
        int s = fib.size();
        for (int i = 0; i + 2 < s; i++) {
            if (fib[i] + fib[i + 1] + fib[i + 2] == n) {
                return true;
            }
        }

        return false;
    }
};
