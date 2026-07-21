class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int ones = 0;
        for (char c : s)
            ones += (c == '1');

        string t = "1" + s + "1";
        int n = t.size();

        int ans = ones;

        int prevZero = 0;   // length of previous 0-run
        int oneRun = 0;     // length of current 1-run

        int i = 0;

        while (i < n) {

            if (t[i] == '0') {
                int zeroRun = 0;
                while (i < n && t[i] == '0') {
                    zeroRun++;
                    i++;
                }

                if (prevZero > 0 && oneRun > 0) {
                    ans = max(ans, ones + prevZero + zeroRun);
                }

                prevZero = zeroRun;
                oneRun = 0;
            }
            else {
                int len = 0;
                while (i < n && t[i] == '1') {
                    len++;
                    i++;
                }
                oneRun = len;
            }
        }

        return ans;
    }
};