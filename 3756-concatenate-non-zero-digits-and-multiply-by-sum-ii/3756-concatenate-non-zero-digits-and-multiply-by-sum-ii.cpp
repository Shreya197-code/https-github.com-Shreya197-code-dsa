class Solution {
public:
 static const int MOD = 1e9 + 7;
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
       
        vector<int> pos;
        vector<int> digit;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {
                pos.push_back(i);
                digit.push_back(s[i] - '0');
            }
        }

        int k = digit.size();

        vector<long long> pref(k + 1, 0);
        vector<long long> sumPref(k + 1, 0);

        vector<long long> power10(k + 1, 1);

        for (int i = 1; i <= k; i++)
            power10[i] = (power10[i - 1] * 10) % MOD;

        for (int i = 1; i <= k; i++) {
            pref[i] = (pref[i - 1] * 10 + digit[i - 1]) % MOD;
            sumPref[i] = sumPref[i - 1] + digit[i - 1];
        }

        vector<int> ans;

        for (auto &q : queries) {

            int l = q[0];
            int r = q[1];

            int left = lower_bound(pos.begin(), pos.end(), l) - pos.begin();
            int right = upper_bound(pos.begin(), pos.end(), r) - pos.begin() - 1;

            if (left > right) {
                ans.push_back(0);
                continue;
            }

            int len = right - left + 1;

            long long number =
                (pref[right + 1] -
                 pref[left] * power10[len] % MOD + MOD) % MOD;

            long long sum = sumPref[right + 1] - sumPref[left];

            ans.push_back(number * (sum % MOD) % MOD);
        }

        return ans;

 
    }
};