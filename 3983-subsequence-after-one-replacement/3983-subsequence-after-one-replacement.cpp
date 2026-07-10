class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int n = s.size(), m = t.size();

        if (n > m) return false;

        // pre[i] = earliest position in t after matching s[0...i-1]
        vector<int> pre(n + 1);
        int j = 0;
        pre[0] = 0;

        for (int i = 0; i < n; i++) {
            while (j < m && t[j] != s[i]) j++;
            if (j == m) {
                for (int k = i + 1; k <= n; k++)
                    pre[k] = m + 1;
                break;
            }
            pre[i + 1] = ++j;
        }

        // suf[i] = latest position in t before matching s[i...n-1]
        vector<int> suf(n + 1);
        j = m - 1;
        suf[n] = m - 1;

        for (int i = n - 1; i >= 0; i--) {
            while (j >= 0 && t[j] != s[i]) j--;
            if (j < 0) {
                for (int k = i; k >= 0; k--)
                    suf[k] = -2;
                break;
            }
            suf[i] = --j;
        }

        // Already a subsequence
        if (pre[n] != m + 1)
            return true;

        // Try replacing each character once
        for (int i = 0; i < n; i++) {
            int left = pre[i];
            int right = (i == n - 1) ? m - 1 : suf[i + 1];

            if (left <= right)
                return true;
        }

        return false;
    }
};