
class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {

        sort(logs.begin(), logs.end(), [](auto &a, auto &b) {
            return a[1] < b[1];
        });

        vector<pair<int, int>> q;

        for (int i = 0; i < queries.size(); i++) {
            q.push_back({queries[i], i});
        }

        sort(q.begin(), q.end());

        vector<int> ans(queries.size(), 0);
        unordered_map<int, int> freq;

        int left = 0, right = 0;

        for (auto &query : q) {

            int start = query.first - x;
            int end = query.first;
            int idx = query.second;

            while (right < logs.size() && logs[right][1] <= end) {
                freq[logs[right][0]]++;
                right++;
            }

            while (left < right && logs[left][1] < start) {
                freq[logs[left][0]]--;

                if (freq[logs[left][0]] == 0) {
                    freq.erase(logs[left][0]);
                }

                left++;
            }

            ans[idx] = n - freq.size();
        }

        return ans;
    }
};
